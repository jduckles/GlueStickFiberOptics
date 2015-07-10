const int TX = 10;
const int RX = A1;
float RXmean = 0;
float counter = 0;
int cycles = 10000;

void setup() {
  // put your setup code here, to run once:
  pinMode(RX, INPUT);
  pinMode(TX, OUTPUT);
  Serial.begin(300);
}

void loop() {
  // put your main code here, to run repeatedly:
  int RXvalue = analogRead(RX);
  if (counter == cycles) { 
    RXmean = (RXmean + RXvalue) / 2; 
    counter = 0;
  }
  Serial.println("testing");
  if (RXvalue > RXmean + 50) {
    digitalWrite(TX, HIGH);
  }
  else {
    digitalWrite(TX, LOW);
  }
  counter++;

}
