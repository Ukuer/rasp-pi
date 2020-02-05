// Little Star

int beepPin = 8;
int c = 264;
int d = 297;
int e = 330;
int f = 352;
int g = 396;
int a = 440;
int b = 495;
int music[] = {c,c,g,g,a,a,g,f,f,e,e,d,d,c,\
                g,g,f,f,e,e,d,g,g,f,f,e,e,d,\
                c,c,g,g,a,a,g,f,f,e,e,d,d,c};


void setup() {
  // put your setup code here, to run once:
  pinMode(beepPin, OUTPUT);   // 蜂鸣器引脚
}

void loop() {
  // put your main code here, to run repeatedly:
  
  for (int i=1;i<=14*3; ++i){
    if (i!=0 && i%7==0){
      tone(8,music[i-1]);
      delay(1400);
      noTone(8);
      delay(100);
    }
    else{
      tone(8,music[i-1]);
      delay(1000);
      noTone(8);
      delay(500);
    }
  }
  
}
