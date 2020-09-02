# Control-Car-2DW
Un control para el auto 2DW con puente dobleH 'HC-05' y con sensor ultrasonico HR-04. 

El proyecto consta de dos partes:
- Una aplicación hecha en [React-Native](#) para controlarlo via Bluetooth. 
- El [Control-Car-2DW](#) software montado en la placa Arduino UNO R3

## Step 1: Installation 🚀

Please describe the steps to install this project.

For example:

1. Open this file
2. Edit as you like
3. Release to the World!

## Step 2: Assemble the circuit 🔧

A. Se deben colocar los componentes como en la siguiente imagen:

![Aquí la descripción de la imagen por si no carga](https://raw.githubusercontent.com/juanignaciorey/Control-Car-2WD/master/Assets/layout.png)

B. Assemble the circuit following the diagram layout.png attached to the sketch
![circuit-2wd-car](https://raw.githubusercontent.com/juanignaciorey/Control-Car-2WD/master/Assets/schematics.png)

## Step 3: Load the code

Upload the code contained in this sketch on to your board

### Folder structure
'''
Control-Car-2DW                => Arduino sketch folder
 .
 Assets
  ├── schematics.png                      => an image of the required schematics
  ├── layout.png                          => an image of the layout
 ControlCarro2DW_HC05_SR04.ino            => main Arduino file
 README.md                                => this file
'''

## Construido con 🛠️

* [Fritzing](https://fritzing.org/) - Herramienta para diagramar y diseñar el circuito
* [Arduino](https://store.arduino.cc/usa/arduino-uno-rev3)
* [Kit Car 2WD](https://candy-ho.com/producto/kit-para-armar-auto-inteligente-2wd-arduino-starter-kit-dvd/) - Kit usado

=== Contributing
To contribute to this project please contact JuanIgnacioRey92 https://id.arduino.cc/JuanIgnacioRey92

=== BOM
Add the bill of the materials you need for this project.

|===
| ID | Part name      | Part number | Quantity
| R1 | 10k Resistor   | 1234-abcd   | 10
| L1 | Red LED        | 2345-asdf   | 5
| A1 | Arduino Zero   | ABX00066    | 1
|===


=== Help
This document is written in the _AsciiDoc_ format, a markup language to describe documents.
If you need help you can search the http://www.methods.co.nz/asciidoc[AsciiDoc homepage]
or consult the http://powerman.name/doc/asciidoc[AsciiDoc cheatsheet]
