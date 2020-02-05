int R = 10;
int G = 8;
int Y = 12;   // Red light, Green light, and Yellow light

void setup() {
  // put your setup code here, to run once:
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(Y, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(R, HIGH);
  digitalWrite(Y, LOW);
  digitalWrite(G, LOW);
  delay(5000);      // red light turn on 5s

  digitalWrite(Y, HIGH);
  // digitalWrite(R, LOW);
  delay(2000);    // both red and yellow are on

  digitalWrite(R, LOW);
  digitalWrite(Y, LOW);
  digitalWrite(G, HIGH);
  delay(5000);    // green light turn on 5s

  digitalWrite(G, LOW);
  digitalWrite(Y, HIGH);
  delay(2000);
}
