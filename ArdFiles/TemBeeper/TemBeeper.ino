// 温度报警器

float sinVal;
int toneVal;
unsigned long tepTimer;
int val;    // 用于存储 LM35 的值
double data;  // 用于存储已转换的温度值

void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);   // 蜂鸣器引脚
  Serial.begin(9600);   // 设置波特率为 9600bps
}

void loop() {
  val = analogRead(0);  // LM35 连接到模拟端口，并读入值
  data = (double) val * 5 / 10.24;    // 将得到的电压值，转换为温度值

  if (data > 22) {
    SinBeep();
  }
  else{
    noTone(8);  // 关闭 蜂鸣器
  }

  if (millis() - tepTimer > 500){  // 每 500ms 输出一次温度值
    tepTimer = millis();
    Serial.print(data);
    Serial.print("C\n");
  }
  
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
