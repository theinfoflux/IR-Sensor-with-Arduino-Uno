int relay = 7;
int irpin = 5;
int irstatus = HIGH;  
void setup() {
  Serial.begin(9600);
  pinMode(relay, OUTPUT);
  pinMode(irpin, INPUT);
}

void loop() {
  irstatus = digitalRead(irpin);
  if (irstatus == LOW) {
    Serial.println("relay turned on");
    digitalWrite(relay, HIGH);
    delay(2000);
    digitalWrite(relay, LOW);

  }
  else {
  
    digitalWrite(relay, LOW);
  }
  delay(200);
}
