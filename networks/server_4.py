import socket 
import hmac 
import hashlib
key = b'my_secret_key' 
hash_func = hashlib.sha256 
client_socket = socket.socket()
host = socket.gethostname()
port = 12345
client_socket.connect((host, port))
msg = b'Hello, server!' 
client_socket.send(msg)
msg_with_digest_and_parity = client_socket.recv(1024) 
msg = msg_with_digest_and_parity[:-33]
digest = msg_with_digest_and_parity[-33:-1]
parity = msg_with_digest_and_parity[-1]
expected_parity = 0 
for byte in msg:
    expected_parity ^= byte 
expected_parity &= 0x01
if expected_parity != parity: 
    print('Parity bit verification failed') 
    exit()
hmac_obj = hmac.new(key, msg, hash_func) 
expected_digest = hmac_obj.digest()

if expected_digest == digest:
    print('HMAC verification successful') 
    print('Received message:', msg.decode())
else:
    print('HMAC verification failed')
client_socket.close()