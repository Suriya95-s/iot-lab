
import serial

# Open the serial port
ser = serial.Serial('COM3', 9600)  # Replace COM3 with your Arduino's serial port

# Send data to Arduino
data = "Hello, Arduino!"
ser.write(data.encode())

# Receive data from Arduino
received_data = ser.readline().decode()
print("Received from Arduino:", received_data)

# Close the serial port
ser.close()
