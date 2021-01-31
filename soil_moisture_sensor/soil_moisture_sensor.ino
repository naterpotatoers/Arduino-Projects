void setup() {
  Serial.begin(9600);
}
void loop() {
  int val, mapped_value;
  val = analogRead(A0); 
  // lowest recorded value
  mapped_value = map(val, 300, 590, 100, 0);
  Serial.print("Original: ");
  Serial.print(val);
  Serial.print("\tWetness: ");
  Serial.print(mapped_value);
  Serial.println("%");
  
  delay(500);
}
