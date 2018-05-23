/*
使用u8glib显示字符串
控制器：Arduino UNO
*/
 
// 包含头文件，并新建u8g对象
#include "U8glib.h"
U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_NONE|U8G_I2C_OPT_DEV_0); //硬件SPI驱动构造函数
 
// draw函数用于包含实现显示内容的语句
void draw() {
  // 设置字体
  u8g.setFont(u8g_font_unifont);
  // 设置文字及其显示位置
  u8g.drawStr( 0, 20, "Hello Arduino");
}
 
void setup() {
}
 
void loop() {
  // u8glib图片循环结构：
  u8g.firstPage();  
  do {
    draw();
  } 
while( u8g.nextPage() );
  // 等待一定时间后重绘
  delay(500);
}
