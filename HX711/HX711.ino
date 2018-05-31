#include"HX711.h"
int Weight = 0;

 
void setup() {
                                 
 
        Serial.begin(9600);
  
   Init_Hx711();
    Get_Maopi();   //clear the weight 
        delay(3000);
                 
}
 
void loop() {
  Weight = Get_Weight();        
        Serial.println("Weight = ");
        Serial.println(Weight);        //the true weight
        Serial.println(" g");        
                 
        delay(1000);        
}
