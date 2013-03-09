char data;

void setup(){  
   pinMode(13,OUTPUT);  //stock led on arduino uno board 
   Serial.begin(9600); //stock baud rate of HC-06 module
   Serial.flush();
}

void loop(){
   
   while(!Serial.available());
   data = Serial.read();  
   if (data == '1'){
     digitalWrite(13,HIGH);
     Serial.print("led ON");
   }
   else if(data == '0'){       
     digitalWrite(13,LOW);  
     Serial.print("led OFF"); 
   }
   else{
     Serial.print("WTF?");    
   }
}
