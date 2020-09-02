# Control-Car-2DW
Un control para el auto 2WD con puente dobleH 'HC-05' y con sensor ultrasonico HR-04. 

_Consta de dos partes: Una **[App hecha en React-Native](#)** para controlarlo via Bluetooth, y **el sketch [Control-Car-2DW](#)** del cual se encarga éste repositorio_

*Read this in other languages: [English](README.en.md), [Español](README.md).*

## Step 1: Carga el código en la placa 🚀

Suba el sketch(ControlCarro2WD_HC05_SR04.ino) a su placa Arduino:

1. Abre ControlCarro2WD_HC05_SR04.ino en el IDE Arduino
2. Presiona check para verificar que el codigo no tenga errores
3. Presione el menu 'Herramientas' -> 'Placa' -> 'Arduino/Genuino UNO'.
4. Presione el menu 'Herramientas' -> 'Puerto' -> Y seleccione su placa.
5. Presione compilar y subir el codigo( tiene forma similar a una flecha =>).

## Step 2: Armar el circuito! 🔧

A. Se deben colocar los componentes como en la siguiente imagen:

![Montaje de piezas del kit](https://raw.githubusercontent.com/juanignaciorey/Control-Car-2WD/master/Assets/layout.png)

B. Ademas se debe montar el circuito siguiendo el diagrama: schematics.png 
![circuito 2wd](https://raw.githubusercontent.com/juanignaciorey/Control-Car-2WD/master/Assets/schematics.png)

### Conecciones

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
'''
Control-Car-2DW                => Carpeta del sketch 
 .
 Assets
  ├── schematics.png                      => una imagen del esquema de los componentes requeridos
  ├── layout.png                          => una imagen del montaje de componentes
 ControlCarro2DW_HC05_SR04.ino            => Archivo Arduino
 README.md                                => Este archivo
 README_EN.md                             =>  "     "   en ingles
'''


## Construido con 🛠️

* [Fritzing](https://fritzing.org/) - Herramienta para diagramar y diseñar el circuito
* [Arduino](https://store.arduino.cc/usa/arduino-uno-rev3)
* [Kit Car 2WD](https://candy-ho.com/producto/kit-para-armar-auto-inteligente-2wd-arduino-starter-kit-dvd/) - Kit usado

## Te interesa contribuir?
Para contribuir a este proyecto por favor 