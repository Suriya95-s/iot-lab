import serial
import time

def main():
    # Replace 'COM3' with the correct port for your Arduino
    arduino_port = "COM3"
    baud_rate = 9600  # Set the baud rate to match the Arduino's

    # Initialize serial communication
    ser = serial.Serial(arduino_port, baud_rate)
    time.sleep(2)  # Wait for the serial connection to initialize

    def send_data(data):
        ser.write(data.encode())  # Send data to the Arduino
        ser.write(b'\n')  # Send a newline character to indicate the end of the data
        time.sleep(0.1)  # Short delay to allow Arduino to process the data

    def receive_data():
        if ser.in_waiting > 0:
            received_data = ser.readline().decode().strip()  # Read the incoming data
            return received_data
        return None

    try:
        while True:
            user_input = input("Enter data to send to Arduino: ")
            send_data(user_input)
            time.sleep(1)  # Wait for Arduino to respond
            response = receive_data()
            if response:
                print("Arduino response:", response)
    except KeyboardInterrupt:
        print("Exiting program.")
    finally:
        ser.close()  # Close the serial connection

if __name__ == "__main__":
    main()
