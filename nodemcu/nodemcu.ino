#define LED D0            // Led in NodeMCU at pin GPIO16 (D0).

int mode = 0;

void setup() {
  
  Serial.begin(115200);
  
  pinMode(LED, OUTPUT);    // LED pin as output.
  digitalWrite(LED, HIGH);
  mode = 1;
  Serial.println("Start");
}
void loop() {
    if (Serial.available()){
      int s = Serial.read();
      Serial.print(s);
      Serial.print("HELLO");
      if(s){
        if(mode == 0){
        mode = 1;
        digitalWrite(LED, HIGH);
       }
       else{
        mode = 0;
        digitalWrite(LED, LOW);
       }
      }  
   }
    
    
    
}
