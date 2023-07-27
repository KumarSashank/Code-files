import socket 
import hmac 
import hashlib
key = b'my_secret_key'
hash_func = hashlib.sha256 
server_socket = socket.socket()
host = socket.gethostname() 
port = 12345
server_socket.bind((host, port)) 
server_socket.listen(1)
print('Waiting for client connection...') 
client_socket, addr = server_socket.accept() 
print('Connection from: ' + str(addr))
msg = client_socket.recv(1024)
hmac_obj = hmac.new(key, msg, hash_func) 
digest = hmac_obj.digest()
parity = 0
for byte in msg:
    parity ^= byte 
parity &= 0x01
msg += digest
msg += bytes([parity]) 
client_socket.send(msg)
client_socket.close()