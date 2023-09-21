#include <Arduino.h>
#include <SSD1306.h>
SSD1306         display(0x3c, 4, 5, GEOMETRY_128_32);

int val = 0; // AD 변환값을 저장할 변수
void setup() {
 Serial.begin(115200);
 display.init();
 display.flipScreenVertically();
 display.setFont(ArialMT_Plain_16);
 display.drawString(10, 10, "Hello World");
 display.display();
}
void loop()
{
 val = analogRead(0); // 아날로그 0번 핀 (VR) 값을 입력
 Serial.println(val);
 delay(50);
}