// 互动交通信号灯

// car light
int carRed = 12;
int carYellow = 11;
int carGreen = 10;
int button = 9;
// people light
int pedRed = 8;
int pedGreen = 7;
int crosstime = 5000;
unsigned long changeTime;  // time of pressing button

void setup() {
  // put your setup code here, to run once:
  pinMode(carRed, OUTPUT);
  pinMode(carYellow, OUTPUT);
  pinMode(carGreen, OUTPUT);
  pinMode(pedRed, OUTPUT);
  pinMode(pedGreen, OUTPUT);
  pinMode(button, INPUT);   // set button with INPUT

  digitalWrite(carGreen, HIGH);
  digitalWrite(pedGreen, HIGH);
}

void loop() {
  // get the states information of button
  int state = digitalRead(button);

  // check if button is pressed
  if (state == HIGH && (millis() - changeTime) > 5000) {
        // use the function of changing light
        changeLights();
  }
}

void changeLights(){
   // turn off the carGreen light and on the carYellow light and wait 2s
   digitalWrite(carGreen, LOW);
   digitalWrite(carYellow, HIGH);
   delay(2000);

  // turn off the carYellow and on the carRed and wait 1s
  digitalWrite(carYellow, LOW);
  digitalWrite(carRed, HIGH);
  delay(1000);

  // turn off the pedRed and on the pedGreen and hold a crosstime
  digitalWrite(pedRed, LOW);
  digitalWrite(pedGreen, HIGH);
  delay(crosstime);

  // make a blink to metion that time is to be over
  for (int x=0; x<10; x++){
    digitalWrite(pedGreen, HIGH);
    delay(250);
    digitalWrite(pedGreen, LOW);
    delay(250);
  }

  // turn on the pedRed and stop passing
  digitalWrite(pedRed, HIGH);
  delay(500);

  // recover the states of car light
  digitalWrite(carRed, LOW);
  digitalWrite(carYellow, HIGH);
  delay(1000);
  digitalWrite(carYellow, LOW);
  digitalWrite(carGreen, HIGH);

  changeTime = millis();
}
