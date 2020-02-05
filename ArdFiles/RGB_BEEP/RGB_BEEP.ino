// 带彩灯的温度报警器

int redPin = 9;
int greenPin = 10;
int bluePin = 11;
int beepPin = 8;
float sinVal;
int toneVal;
unsigned long tepTimer;
double val;    // 用于存储 LM35 的值
double data;  // 用于存储已转换的温度值


void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(beepPin, OUTPUT);
  Serial.begin(9600);   // 设置波特率为 9600bps
}
void loop() {
  val = analogRead(0);  // LM35 连接到模拟端口，并读入值
  data =  val * (5/10.24);    // 将得到的电压值，转换为温度值

  if ((int)data >= 22) {
    colorRGB(255,0,0);
    for(int i=0; i<3; i++)
      SinBeep();
  }
  else{
    colorRGB(random(0,255),random(0,255),random(0,255));
    noTone(beepPin);  // 关闭 蜂鸣器
    delay(1000); 
  }

  if (millis() - tepTimer >= 1000){  // 每 1s 输出一次温度值
    tepTimer = millis();
    Serial.print(data);
    Serial.print("C\n");
  }  
}

void colorRGB(int red, int green, int blue){
  analogWrite(redPin, constrain(red, 0, 255));
  analogWrite(greenPin, constrain(green, 0, 255));
  analogWrite(bluePin, constrain(blue, 0, 255));
}

void SinBeep(){   // 以 sin 波作为蜂鸣器的频率
  for (int x=0; x < 180; x++){
      // 将 sin 函数的角度转化为弧度
      sinVal = sin( (double)x * 3.14 / 180);
      // 用 sin 产生声音的频率
      toneVal = 2000 + (int)(sinVal * 1000);
      tone (8, toneVal);
      delay(2);
    }
}
