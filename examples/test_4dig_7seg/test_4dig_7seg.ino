#include <SeSe247.h>

SeSe247 seg_4digit;

int i,a=0;

void setup() {
  ///////////////////////////////////////////////////////////////
  /////////////*  Khoi tao module led 7 doan  *//////////////////
  //                                                        
  // 13, 12, 11, 10 tuong ung voi ngo vao tin hieu A, B, C, D  //
  // 0, 1, 2, 3 tuong ung voi vi tri led 7 doan thu 1, 2, 3, 4 //
  //                                                           //
  ///////////////////////////////////////////////////////////////
  seg_4digit.KhoiTao_4led_7doan(13, 12, 11, 10, 0, 1, 2, 3);

  for (i=0;i<100;i++){
    seg_4digit.Hien_Thi(8, 1, 5); //Hien thi so 8 tai vi tri led thu 1, thoi gian hien thi 5ms
    seg_4digit.Hien_Thi(8, 2, 5); //Hien thi so 8 tai vi tri led thu 2, thoi gian hien thi 5ms
    seg_4digit.Hien_Thi(8, 3, 5); //Hien thi so 8 tai vi tri led thu 3, thoi gian hien thi 5ms
    seg_4digit.Hien_Thi(8, 4, 5); //Hien thi so 8 tai vi tri led thu 4, thoi gian hien thi 5ms
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for (i=0;i<10;i++)
  {
    seg_4digit.Hien_Thi(a%10, 1, 5);
    seg_4digit.Hien_Thi(((a%1000)%100)/10, 2, 5);
    seg_4digit.Hien_Thi((a%1000)/100, 3, 5);
    seg_4digit.Hien_Thi(a/1000, 4, 5);
  }
  a++;
}
