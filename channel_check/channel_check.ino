int ch1; // Here's where we'll keep our channel values
int ch2;
int ch3;
int ch4;
int ch5;
int ch6;

void setup() {

  //pinMode(7, INPUT); // Set our input pins as such
  //pinMode(5, INPUT);
  //pinMode(8, INPUT);
  //pinMode(5,INPUT);
  pinMode(5, INPUT);
  //pinMode(7, INPUT);
  Serial.begin(9600); // Pour a bowl of Serial

}

void loop() {

 // ch1 = pulseIn(7, HIGH, 25000); // Read the pulse width of 
 // ch2 = pulseIn(5, HIGH, 25000); // each channel
  //ch3 = pulseIn(8, HIGH, 25000);
  //ch4 = pulseIn(5,HIGH,25000);
  //ch5 = pulseIn(5,HIGH,25000);
  //ch6 = pulseIn(5,HIGH,25000);
  //Serial.print("Channel 1:"); // Print the value of 
  //Serial.println(ch1);        // each channel

  //Serial.print("Channel 2:");
  //Serial.println(ch2);

  //Serial.print("Channel 3:");
  //Serial.println(ch3);

//Serial.print("Channel 4:");
  //Serial.println(ch4);
  
  //Serial.print("Channel 5:");
  //Serial.println(ch5);
  
  //Serial.print("Channel 6:");
  //Serial.println(ch6);
  
  delay(100); // I put this here just to make the terminal 
              // window happier
}
