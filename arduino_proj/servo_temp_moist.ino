#include <Servo.h>

Servo motor;
float moisture = 0.0;
float temperature = 0.0;

void setup(){
  pinMode(A0, INPUT);// analog input from temperature sensor
  pinMode(A1, INPUT);// analog input from moisture sensor
  motor.attach(9);// connect servo motor to pin 11
  Serial.begin(9600);// arduino default baudrate
}

void loop(){
  
  moisture = analogRead(A1); 
  temperature = analogRead(A0);
  //read temperature
  Serial.print("Temperature ");
  Serial.println(temperature);
  //read moisture
  Serial.print("Moisture ");
  Serial.println(moisture);
  //write to motor
  motor.write(90);
  if(temperature>100){
    if(moisture<30){
      motor.write(180);
    }
  }
  else
    motor.write(90);
 delay(1000); 
  
}

//TinkerCad for simulation
