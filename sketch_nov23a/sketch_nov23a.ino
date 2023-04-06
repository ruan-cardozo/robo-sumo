// Declaração dos pinos dos motores
#define PININ1 11
#define PININ2 12
#define PININ3 2
#define PININ4 3
#define PINENA 10
#define PINENB 4

// Portas sensor
#define SENSOR1 A0    //right
#define SENSOR2 A1


int speed = 135, SpeedL, SpeedR; //velocidade de torque do motor
int sensorPin = A0;
int sensorPin1 = A1;
int valorReferencia = 600;

void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(sensorPin1, INPUT);
  pinMode(PININ1, OUTPUT);
  pinMode(PININ2, OUTPUT);
  pinMode(PININ3, OUTPUT);
  pinMode(PININ4, OUTPUT);
  pinMode(PINENA, OUTPUT);
  pinMode(PINENB, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
  int SensorValor1 = analogRead(SENSOR1);
  int SensorValor2 = analogRead(SENSOR2);
  
 /*analogWrite(2, 200);
  analogWrite(3, 0);
  analogWrite(4, 200);
  analogWrite(10, 200);
  analogWrite(11,0 );
  analogWrite(12, 200);*/
  
  Serial.println(SensorValor1);

  if (SensorValor1 > valorReferencia){
      analogWrite(2, 200);
      analogWrite(3, 0);
      analogWrite(4, 200);
      analogWrite(10, 200);
      analogWrite(11,0 );
      analogWrite(12, 200);
  } else{
      analogWrite(2, 0);
      analogWrite(3, 0);
      analogWrite(4, 0);
      analogWrite(10, 0);
      analogWrite(11, 0);
      analogWrite(12, 0);
  }
} 
