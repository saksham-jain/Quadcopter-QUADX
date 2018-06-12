#include <Arduino.h>

#include <Servo.h>

static const int PROP_PIN1 =3;
static const int PROP_PIN2=6;
//static const int PROP_PIN3 =9;
//static const int PROP_PIN4=10;
Servo brushless1;
Servo brushless2;
//Servo brushless3;
//Servo brushless4;
void setup() {
    Serial.begin(9600);
    brushless1.attach(PROP_PIN1);
    brushless2.attach(PROP_PIN2);
    //brushless3.attach(PROP_PIN3);
    //brushless4.attach(PROP_PIN4);
    brushless1.writeMicroseconds(1000); //set initial value, check your manual
    brushless2.writeMicroseconds(1000); 
    //brushless3.writeMicroseconds(1000); 
    //brushless4.writeMicroseconds(1000); 
    Serial.println("Ready to receive commands");
}

void loop() {
    if(Serial.available()) {
        long value = Serial.parseInt();
        brushless1.writeMicroseconds(value);
        brushless2.writeMicroseconds(value);
        //brushless3.writeMicroseconds(value);
        //brushless4.writeMicroseconds(value);
        Serial.print("Set PWM to ");
        Serial.print(value);
        Serial.println("ms");
    }
}
