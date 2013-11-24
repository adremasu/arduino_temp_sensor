String temp;
int green = 6;
int yellow = 5;
int red = 2;

void setup(){
  Serial.begin(9600);
	pinMode(green, OUTPUT);     
	pinMode(yellow, OUTPUT);     
	pinMode(red, OUTPUT);     

}

  
void loop(){
   int reading = analogRead(0);
   //get the temperature
   float temp = (reading * 0.48828125) ; //converting
   Serial.println(temp);
   if (temp>23){
     digitalWrite(red,HIGH);
     delay(500);
     digitalWrite(red,LOW);
     delay(500);
   } 
   if ((temp>22) and (temp<23)){
     digitalWrite(yellow,HIGH);
     delay(500);
     digitalWrite(yellow,LOW);
     delay(500);
   }
   if (temp<22){
     digitalWrite(green,HIGH);
     delay(500);
     digitalWrite(green,LOW);
     delay(500);
   }  
}
