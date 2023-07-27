import socket
import hmac
import hashlib

def send_message(sock, message, key):
    # Create HMAC for message
    h = hmac.new(key, message.encode(), hashlib.sha256)
    mac = h.digest()

    # Append MAC to message
    message = message.encode() + mac

    # Send message with MAC
    sock.sendall(message)

def receive_message(sock, key):
    # Receive message with MAC
    message = b''
    while True:
        data = sock.recv(1024)
        if not data:
            break
        message += data

    # Split message into message and MAC
    message_data = message[:-32]
    mac = message[-32:]

    # Verify MAC
    h = hmac.new(key, message_data, hashlib.sha256)
    expected_mac = h.digest()
    if mac != expected_mac:
        raise ValueError('MAC does not match')

    # Return message
    return message_data.decode()

# Example usage
key = b'secret_key'

# Client sends a message to the server
with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as sock:
    sock.connect(('localhost', 3300))
    message = 'Hello, server!'
    send_message(sock, message, key)

# Server receives the message and verifies its MAC
with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as sock:
    sock.bind(('localhost', 3300))
    sock.listen()
    conn, addr = sock.accept()
    received_message = receive_message(conn, key)
    print('Received message:', received_message)
