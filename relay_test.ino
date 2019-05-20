int ch = 16;// number of relays you got
const int relay[]={26,27,28,29,
             30,31,32,33,
             34,35,36,37,
             38,39,40,41}; // Arduino pin numbers. the same number of relay should be defined here as input pins


int wait = 500;// delay time
int i=0;

void setup() {
    Serial.begin(9600);// prepare Serial monitor
    // set  pins as output
 for(i=0; i < ch; i++)
 {    
    pinMode(relay[i], OUTPUT);// sent i(th) pin as output
   digitalWrite(relay[i], HIGH); // Turn the relay OFF  
 }
               
    Serial.println("Robojax 4 Relay Test");
}

void loop() {
    
     
 for(int i=0; i < ch; i++)
 {
      Serial.print("Relay "); Serial.print(i+1);Serial.println(" ON");
      digitalWrite(relay[i], LOW); // Turn the relay ON    
      delay(wait);  
 }// for loop


 for(int i=0; i < ch; i++)
 {
      Serial.print("Relay "); Serial.print(i+1);Serial.println(" OFF");
      digitalWrite(relay[i], HIGH); // Turn the relay OFF    
      delay(200);  
 }// for loop

    Serial.println("====== loop done ==");

}// loop

