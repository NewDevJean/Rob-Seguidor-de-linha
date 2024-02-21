 #include <Servo.h>  
 Servo ServoD; 
 Servo ServoE; 
 int Sensor1 = 3; 
 int Valor_Sensor1 = 0; 
 int Sensor2 = 4; 
 int Valor_Sensor2 = 0;  

 void setup(){ 
   
  ServoD.attach(5);  
  ServoE.attach(6); 
 } 
 void loop(){ 
  Valor_Sensor1 = analogRead(Sensor1);
  Valor_Sensor2 = analogRead(Sensor2);  
  if((Valor_Sensor1 > 450) && (Valor_Sensor2 > 450)){
  ServoD.write(0);     
  ServoE.write(180);  
  }   
  if((Valor_Sensor1 < 450) && (Valor_Sensor2 > 450)){
  ServoD.write(90);     
  ServoE.write(180);   
  }   
  if((Valor_Sensor1 > 450) && (Valor_Sensor2 < 450)){
  ServoD.write(0);  
  ServoE.write(90);   
  }   
  if((Valor_Sensor1 < 450) && (Valor_Sensor2 < 450)){ //caso os dois sensores
    ServoE.write(0);                                //saiam da linha          
    ServoD.write(90);
   }
 }  
