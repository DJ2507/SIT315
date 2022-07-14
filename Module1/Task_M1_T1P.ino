int input = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Program Running...");
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(PIR, INPUT);
  
}

void loop() {
  input = digitalRead(PIR);
  Serial.println(input);
  if(input){
    digitalWrite(LED_BUILTIN, HIGH);
    Serial.println("Motion Detected");
    Serial.println("Built-In LED ON");
  } else {
    digitalWrite(LED_BUILTIN, LOW);
    Serial.println("Motion Has ceased");
    Serial.println("Built-In LED OFF");
  }
  
  delay(1000);
  
}