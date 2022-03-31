#include <SoftWareSerial.h>

// pin10 for hc-05 txd
// pin11 for hc-05 rxd
SoftWareSerial BT(10, 11);
char val;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.print("blue tooth is ready");
  BT.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()) {
    val = Serial.read();
    BT.print(val);
  }

  if (BT.available()) {
    val = BT.read();
    Serial.print(val);
  }
}
