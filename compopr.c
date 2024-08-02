sbit P1_0 = P1^0;

void main(void) {
    unsigned char num1 = 0x55; // First number
    unsigned char num2 = 0x5; // Second number

    if (num1 == num2) {
        P1_0 = 1;  // Set P1.0 if numbers are equal
    } else {
        P1_0 = 0;  // Clear P1.0 if numbers are not equal
    }

    while (1); // Infinite loop to keep the program running
}