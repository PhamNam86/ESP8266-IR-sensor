int inputPin = 16; // choose input pin (for Infrared sensor) 
int val = 0; // variable for reading the pin status

void setup() 
{  
   pinMode(inputPin, INPUT); // declare Infrared sensor as input
   Serial.begin(9600);
}

void loop()
{ 
   val = digitalRead(inputPin); // read input value 
   if (val == HIGH)
   { // check if the input is HIGH
      digitalWrite(inputPin,LOW); // turn LED OFF   
      Serial.println("LOW");
   } 
   else 
   { 
      digitalWrite(inputPin,HIGH); // turn LED ON
      Serial.println("HIGH"); 
   } 
   delay(1000);
}
