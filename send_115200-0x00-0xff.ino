static unsigned char dataBuffer[256];

void setup() {
  int i;

  Serial.begin(115200); // opens serial port, sets data rate
  for (i = 0; i < 256;i++) {
    dataBuffer[i] = i;
  }
}

void loop() {
  while(1) {
    Serial.write(dataBuffer, 256);
  }
}
