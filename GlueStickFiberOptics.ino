void setup() {
  // put your setup code here, to run once:
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
int del = 200;
blink(0,del);
blink(1,del);
blink(2,del);
blink(3,del);
blink(4,del);

}

void blink(int pin, int del) {
  digitalWrite(pin, HIGH);
  delay(del);
  digitalWrite(pin, LOW);
  delay(del);
}

