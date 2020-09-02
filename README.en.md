# Control-Car-2DW
A control for the car 2WD with double bridge H 'HC-05' and with ultrasonic sensor HR-04.

_It consists of two parts: An **[App made in React-Native](#)** to control it via Bluetooth, and ** the sketch [Control-Car-2DW] (#) ** which this repository is in charge of_

*Read this in other languages: [English](README.en.md), [Español](README.md).*

## Step 1: Load the code 🚀

Upload the code contained in this sketch(ControlCarro2WD_HC05_SR04.ino) on to your board

For example:

1. Open ControlCarro2WD_HC05_SR04.ino in the Arduino IDE.
2. Press 'Check' to verify that the code has no errors.
3. Press the menu 'Tools' -> 'Board' -> 'Arduino / Genuino UNO'.
4. Press the menu 'Tools' -> 'Port' -> And select your board.
5. Press compile and upload the code (it looks like an arrow =>).

## Step 2: Assemble the circuit 🔧

A. The components should be placed as in the following image:

![Assembling kit parts](https://raw.githubusercontent.com/juanignaciorey/Control-Car-2WD/master/Assets/layout.png)

B. Assemble the circuit following the diagram schematics.png attached to the sketch
![circuit-2wd-car](https://raw.githubusercontent.com/juanignaciorey/Control-Car-2WD/master/Assets/schematics.png)

### Connections

| ARDUINO | L298D (Puente H) |
| ------- | ------- |
| 5  | ENA  |
| 6  | ENB  |
| 10 | IN1  |
| 11 | IN2 |
| 12 | IN3 |
| 13 | IN4 |
 
| ARDUINO | Bluetooth HC-05 |
| ------- | ------- |
| 0  | TX  |
| 1  | RX  |
| 2  | VCC  |
| GND  | GND  |
 
| ARDUINO | Sensor Ultrasonido HC-SR04 |
| ------- | ------- |
| 2  | Echo  |
| 3  | Trig  |
| 5V  | VCC  |
| GND  | Gnd  |
 
### Folder structure

    .
    ├── Assets
          └── schematics.png              # an image of the required schematics
          └── layout.png                  # a picture of the component assembly
    ├── LICENSE
    ├── ControlCarro2DW_HC05_SR04.ino     # main Arduino file
    ├── README.md                         # Original language file
    └── README.en.md                      # this file


## Built with 🛠️

* [Fritzing](https://fritzing.org/)
* [Arduino](https://store.arduino.cc/usa/arduino-uno-rev3)
* [Kit Car 2WD](https://candy-ho.com/producto/kit-para-armar-auto-inteligente-2wd-arduino-starter-kit-dvd/)

## Contributing
To contribute to this project please contact me

