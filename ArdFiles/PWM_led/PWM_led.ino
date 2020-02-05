// 呼吸灯

int led = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  fadeOn(1000, 5);
  fadeOff(1000, 5);
}

void fadeOn(unsigned int times, int increament){
  for (byte value = 0; value < 255; value += increament){
    analogWrite(led, value);
    delay(times / (255 / increament));
  }
}
void fadeOff(unsigned int times, int increament){
  for (byte value = 255; value > 0 ; value -= increament){
    analogWrite(led, value);
    delay(times / (255 / increament));
  }
}
