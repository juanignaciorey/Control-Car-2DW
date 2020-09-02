# Control-Car-2DW
Un control para el auto 2WD con puente dobleH 'HC-05' y con sensor ultrasonico HR-04. 

_Consta de dos partes: Una aplicación hecha en [React-Native](#) para controlarlo via Bluetooth, y El [Control-Car-2DW](#) software montado en la placa Arduino UNO R3. (Del cual se encarga éste repositorio)_

*Read this in other languages: [English](README.en.md), [Español](README.md).*

## Step 1: Load the code 🚀

Upload the code contained in this sketch(ControlCarro2WD_HC05_SR04.ino) on to your board

For example:

1. Open ControlCarro2WD_HC05_SR04.ino in the Arduino IDE
2. Edit as you like
3. Release to the World!
open ControlCarro2WD_HC05_SR04.ino in the Arduino IDE

## Step 2: Assemble the circuit 🔧

A. Se deben colocar los componentes como en la siguiente imagen:

![Aquí la descripción de la imagen por si no carga](https://raw.githubusercontent.com/juanignaciorey/Control-Car-2WD/master/Assets/layout.png)

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
| 0  | TX  |
| 1  | RX  |
| 2  | VCC  |
| GND  | GND  |
 
| ARDUINO | Sensor Ultrasonido HC-SR04 |
| 2  | Echo  |
| 3  | Trig  |
| 5V  | VCC  |
| GND  | Gnd  |
 
### Folder structure
'''
Control-Car-2DW                => Arduino sketch folder
 .
 Assets
  ├── schematics.png                      => an image of the required schematics
  ├── layout.png                          => an image of the layout
 ControlCarro2DW_HC05_SR04.ino            => main Arduino file
 README.md                                => this file
 README_EN.md                                => this file
'''



## Construido con 🛠️

* [Fritzing](https://fritzing.org/) - Herramienta para diagramar y diseñar el circuito
* [Arduino](https://store.arduino.cc/usa/arduino-uno-rev3)
* [Kit Car 2WD](https://candy-ho.com/producto/kit-para-armar-auto-inteligente-2wd-arduino-starter-kit-dvd/) - Kit usado

## Contributing
To contribute to this project please contact me
