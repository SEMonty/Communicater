import socket
import subprocess


s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
s.bind(('',6000))
s.setblocking(0)
data=''
address=''
while True:
    try:
        data,address = s.recvfrom(120)
    except socket.error:
        pass
    else:
        if data.startswith('a'):
			cmd = 'echo "18=' + data.lstrip('a') + '" > /dev/pi-blaster'
			subprocess.call(cmd, shell=True)
			
        if data.startswith('s'):
			cmd = 'echo "17=' + data.lstrip('s') + '" > /dev/pi-blaster'
			subprocess.call(cmd, shell=True)

        if data.startswith('p'):
			subprocess.call( 'sudo /home/pi/git/pi-blaster/./pi-blaster' , shell=True)