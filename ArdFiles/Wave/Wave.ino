const int TrigPin = 2; 
const int EchoPin = 3; 
char ch;
int beepPin = 8;
int c = 264;
int d = 297;
int e = 330;
int f = 352;
int g = 396;
int a = 440;
int b = 495;
//float array[10];
float cm;
float hz;
int i;

float test(){

  digitalWrite(TrigPin, LOW); //低高低电平发一个短时间脉冲去TrigPin 
  delayMicroseconds(2); 
  digitalWrite(TrigPin, HIGH); 
  delayMicroseconds(10); 
  digitalWrite(TrigPin, LOW);

  return  pulseIn(EchoPin, HIGH) / 58;
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); 
  pinMode(TrigPin, OUTPUT); 
  pinMode(EchoPin, INPUT);
}


void loop(){ 
  cm = 0;
  for (i=0; i<100; ++i){
    cm += test();
  }
  cm /= 100;
  
  if (cm > 100){
    cm = (int(cm * 100)) / 100; //保留两位小数 
    Serial.print(cm); Serial.print("cm");//串口输出 
    Serial.println(); 
    delay(1000); 
    return;
  }
/*
  if (cm > 5 && cm < 70){
    hz = c + cm / 70 * (b-c); 
  }
  else if (cm < 5){
    hz = c;
  }
  else {
    hz = b;
  }
*/
  
  if (cm>0 && cm < 15)  {hz = c;ch='c';}
  else if (cm >= 15 && cm < 25) {hz = d;ch='d';}
  else if (cm >= 25 && cm < 36)  {hz = e;ch='e';}
  else if (cm >= 36 && cm < 46) {hz = f;ch='f';}
  else if (cm >= 46 && cm < 56) {hz = g;ch='g';}
  else if (cm >=56 && cm <= 66) {hz = a;ch='a';}
  else if (cm > 76) {hz = b;ch='b';}

  tone (beepPin, hz);
  delay (1000);
  noTone(beepPin);
  Serial.print(cm); 
  Serial.print("cm   ");//串口输出 
  Serial.print(ch);
  Serial.println(); 
}
