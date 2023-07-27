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
msg_with_digest = client_socket.recv(1024) 
msg = msg_with_digest[:-32]
digest = msg_with_digest[-32:]
hmac_obj = hmac.new(key, msg, hash_func) 
expected_digest = hmac_obj.digest()
if expected_digest == digest:
    print('HMAC verification successful') 
    print('Received message:', msg.decode())
else:
    print('HMAC verification failed')
client_socket.close()