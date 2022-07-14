#define PIR 2

int input = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Program Running...");
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(PIR, INPUT);
  
}

void loop() {
  input = digitalRead(PIR);
  if(input){
    digitalWrite(LED_BUILTIN, HIGH);
    Serial.println("Motion Detected");
    Serial.println("Built-In LED ON");
    Serial.println(" ");
  } else {
    digitalWrite(LED_BUILTIN, LOW);
    Serial.println("Motion Has ceased");
    Serial.println("Built-In LED OFF");
    Serial.println(" ");
  }
  
  delay(1000);
  
}