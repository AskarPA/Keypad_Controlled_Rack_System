**KEYPAD CONTROLLED RACK SYSTEM**
This project demonstrates the use of a 4x3 keypad to control a relay, which in turn controls a 12V DC wiper motor to move a rack. The setup includes visual and auditory feedback using LEDs and a buzzer. The code is written for Arduino and utilizes the Keypad library to read input from the keypad.

**Features**
4x3 Keypad Input: Allows user to input digits using a 4x3 matrix keypad.
Relay Control: The relay controls the 12V DC wiper motor based on the keypad input.
Motor Control: Moves the rack using a 12V DC wiper motor.
LED Indicators:
Green LED indicates the relay is on.
Red LED indicates the relay is off.
Buzzer Feedback: Provides auditory feedback when the relay state changes.
Serial Monitor Output: Displays the pressed key on the serial monitor.

**Hardware Required**
1x Arduino board
1x 4x3 Keypad
1x 12V DC Wiper Motor
1x Relay module
1x Green LED
1x Red LED
1x Buzzer
Resistors (appropriate values for LEDs)
1x 12V Power Supply

**Connecting wires**
Pin Configuration
Keypad Pins:
Rows: 9, 8, 7, 6
Columns: 5, 4, 3
Relay Pin: 2
Green LED Pin: 10
Red LED Pin: 11
Buzzer Pin: 12

**Circuit Diagram**
(Include a diagram showing the connections between the Arduino, keypad, relay, LEDs, buzzer, and wiper motor)

**Installation and Setup**
*Library Installation:*

Ensure the Keypad library is installed in your Arduino IDE. If not, you can install it via the Library Manager.
*Wiring:*

Connect the keypad, relay, LEDs, buzzer, and 12V DC wiper motor to the Arduino as per the pin configuration mentioned above.

*Upload Code:*
Upload the provided code to your Arduino board using the Arduino IDE.

*Usage*
Power On: Power on your Arduino setup.
Keypad Input: Press a key on the keypad.
Relay and Motor Response: Observe the relay controlling the 12V DC wiper motor, and LEDs and buzzer providing feedback based on the key pressed.

**Known Issues**
Power Failure Handling: In case of a power failure, the current rack position will not be stored. Upon power restoration, you need to manually reset the system to its initial rack position before operating it. Future enhancements could include implementing non-volatile memory storage (like EEPROM) to save the current state and restore it after a power failure.
