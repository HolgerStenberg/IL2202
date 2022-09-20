



import serial

ser = serial.Serial(port="/dev/cu.usbmodem14401 (Arduino Uno)", baudrate=9600, bytesize=8, timeout=2, stopbits=serial.STOPBITS_ONE)