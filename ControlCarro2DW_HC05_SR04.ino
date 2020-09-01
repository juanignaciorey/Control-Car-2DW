/* 
ARDUINO   L298D (Puente H)        
 5          ENA
 6          ENB
 10         IN1
 11         IN2
 12         IN3
 13         IN4
 
 Conexion del Modulo Bluetooth HC-05 y el Arduino
 ARDUINO    Bluetooth HC-05
 0 (RX)       TX
 1 (TX)       RX
 2           VCC
 GND          GND
 
Conexion Sensor Ultrasonido HC-SR04
ARDUINO    Ultrasonido HC-SR04 
 2            Echo
 3            Trig
 5V           VCC
 GND          Gnd

 */ 
// iNICIALIZAMOS EL AUTO
const int ENA = 5;
const int ENB = 6;
const int IN1 = 13;
const int IN2 = 12;
const int IN3 = 11;
const int IN4 = 10;
// Inicializamos sensor, bocina y luces
#define Trig 3
#define Echo 2
#define sonido A0
const int tones [ ] = {100, 622};

// DECLARAMOS VARIABLES A USAR
char option;
int tiempo = 0;
int distancia = 0;
int duracion = 0;

void setup () {

  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  Serial.begin(9600);

  Serial.println("Iniciando el modulo HC-05");
   /* 
   // No descomentar si se conecta el VCC a 5v(de arduino)
   // Descomentar si se conecta al 2 el VCC
   pinMode(2, OUTPUT); // Lo encendemos aca y no lo conectamos directo a 5V porque si entra en comunicacion mientras carga el programa podemos cortocircuitarlo
   digitalWrite (2, HIGH);    //Enciende el modulo
   miBT.begin(38400);
   */
}

void loop(){
   digitalWrite(ENA, HIGH);
   digitalWrite(ENB, HIGH);

   // Conección por Monitor Serial
  if(Serial.available()>0){        // lee el bluetooth y almacena en estado
    option = Serial.read();
    Serial.print(option);
  }

  switch(option)
  {
    case 'a':
    Avanzar();
    break;
    
    case 'b':
    Izquierda();
    break;
    
    case 'c':
    Frenar();
    break;
    
    case 'd':
    Derecha();
    break;
       
    case 'e':
    Atras();
    break;
    
    case 'Q':
    // ENCENDER LED
    digitalWrite(13,HIGH);
    break;
    case 'R':
    // APAGAR LED
    digitalWrite(13,LOW);
    break;

    case 'Z':
    // Modo Automatico
    digitalWrite(Trig, HIGH);   // genera el pulso de trigger por 10us
     delay(0.01);
     digitalWrite(Trig, LOW);
     
     duracion = pulseIn(Echo, HIGH);          // Lee el tiempo del Echo
     distancia = (duracion/2) / 29;            // calcula la distancia en centimetros
     delay(10); 
     
     if (distancia <= 15 && distancia >=2){    // si la distancia es menor de 15cm
        // tambien se podría activar el Buzzer
        Frenar();
        delay (200);
 
        Atras();
        delay(500);           
        
        Derecha();  
        delay(600);

     }
     else{                             // Si no hay obstaculos se desplaza al frente  
         Avanzar();
    
    break;
    }
  }
}


void Avanzar() {
 digitalWrite(IN1, HIGH);
 digitalWrite(IN2, LOW);
 digitalWrite(IN3, HIGH);
 digitalWrite(IN4, LOW);
}

void Atras() {
 digitalWrite(IN1, LOW);
 digitalWrite(IN2, HIGH);
 digitalWrite(IN3, LOW);
 digitalWrite(IN4, HIGH);
}

void Izquierda() {
 digitalWrite(IN1, LOW);
 digitalWrite(IN2, LOW);
 digitalWrite(IN3, HIGH);
 digitalWrite(IN4, LOW);
}

void Derecha() {
 digitalWrite(IN1, HIGH);
 digitalWrite(IN2, LOW);
 digitalWrite(IN3, LOW);
 digitalWrite(IN4, LOW);
}


void Frenar() {
 digitalWrite(IN1, LOW);
 digitalWrite(IN2, LOW);
 digitalWrite(IN3, LOW);
 digitalWrite(IN4, LOW);

}