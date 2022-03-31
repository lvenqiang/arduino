
char serialData;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  // pinMode(11)
}

void loop() {
  // put your main code here, to run repeatedly:
  serialData = Serial.read();
  if (serialData == 'a') {
    Serial.println("command a got");
  }
}
