int LED = 13;
int Button = 2;
boolean LEDON = false;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(Button, INPUT_PULLUP);
}

void loop() {
  int kondisi = digitalRead(Button);

  if(kondisi==LOW)
  {
    delay(50);
    LEDON =! LEDON;
    digitalWrite(LED, LEDON);
}
}
