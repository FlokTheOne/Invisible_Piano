# Invisible Piano

The **Invisible Piano** is an Arduino-based project that uses a **PING Ultrasonic Sensor** to detect the distance of an object and play corresponding musical notes through a **piezo buzzer**. As an object moves closer or farther away from the sensor, different notes (Do, Re, Mi, Fa, Sol, La, Si) are played, creating an interactive, invisible piano.

## Components Used

- **Arduino Board** (e.g., Arduino Uno)
- **PING Ultrasonic Distance Sensor**
- **Piezo Buzzer**
- Jumper wires

## Wiring

### PING Ultrasonic Sensor:
- **VCC** → 5V (Arduino)
- **GND** → GND (Arduino)
- **Signal** → Pin 11 (Arduino)

### Piezo Buzzer:
- **Positive terminal** → Pin 8 (Arduino)
- **Negative terminal** → GND (Arduino)

## Code

The code utilizes the built-in `pulseIn()` function to read the ultrasonic sensor data, calculate the distance of an object, and map that distance to musical notes (Do, Re, Mi, etc.). The `tone()` function is used to generate the sound on the piezo buzzer.

### Notes Mapping
- 5-10 cm → **Do**
- 10-15 cm → **Re**
- 15-20 cm → **Mi**
- 20-25 cm → **Fa**
- 25-30 cm → **Sol**
- 30-35 cm → **La**
- 35-40 cm → **Si**

## How to Use

1. Connect the components as described in the **Wiring** section.
2. Upload the Arduino code to your Arduino board using the Arduino IDE.
3. When an object is placed in front of the sensor, it will play a corresponding musical note based on the distance.

## License

This project is open-source and available under the [MIT License](LICENSE).
