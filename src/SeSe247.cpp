#include "Arduino.h"
#include "SeSe247.h"

SeSe247::SeSe247()
{
  ;
}

void SeSe247::KhoiTao_4led_7doan(byte a, byte b, byte c, byte d, byte led1, byte led2, byte led3, byte led4){
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);

  _a = a;
  _b = b;
  _c = c;
  _d = d;
  _led1 = led1;
  _led2 = led2;
  _led3 = led3;
  _led4 = led4;
}

void SeSe247::Hien_Thi(int so, int vi_tri, unsigned int thoi_gian){
///////////vi_tri

  if (vi_tri == 1){
    digitalWrite(_led1, HIGH);
  }
  else if (vi_tri == 2){
    digitalWrite(_led2, HIGH);
  }
  else if (vi_tri == 3){
    digitalWrite(_led3, HIGH);
  }
  else if (vi_tri == 4){
    digitalWrite(_led4, HIGH);
  }
/////////////////
////////////so

if (so == 0){
  digitalWrite(_a, 0);
  digitalWrite(_b, 0);
  digitalWrite(_c, 0);
  digitalWrite(_d, 0);
}
else if (so == 1){
  digitalWrite(_a, 1);
  digitalWrite(_b, 0);
  digitalWrite(_c, 0);
  digitalWrite(_d, 0);
}
else if (so == 2){
  digitalWrite(_a, 0);
  digitalWrite(_b, 1);
  digitalWrite(_c, 0);
  digitalWrite(_d, 0);
}
else if (so == 3){
  digitalWrite(_a, 1);
  digitalWrite(_b, 1);
  digitalWrite(_c, 0);
  digitalWrite(_d, 0);
}
else if (so == 4){
  digitalWrite(_a, 0);
  digitalWrite(_b, 0);
  digitalWrite(_c, 1);
  digitalWrite(_d, 0);
}
else if (so == 5){
  digitalWrite(_a, 1);
  digitalWrite(_b, 0);
  digitalWrite(_c, 1);
  digitalWrite(_d, 0);
}
else if (so == 6){
  digitalWrite(_a, 0);
  digitalWrite(_b, 1);
  digitalWrite(_c, 1);
  digitalWrite(_d, 0);
}
else if (so == 7){
  digitalWrite(_a, 1);
  digitalWrite(_b, 1);
  digitalWrite(_c, 1);
  digitalWrite(_d, 0);
}
else if (so == 8){
  digitalWrite(_a, 0);
  digitalWrite(_b, 0);
  digitalWrite(_c, 0);
  digitalWrite(_d, 1);
}
else if (so == 9){
  digitalWrite(_a, 1);
  digitalWrite(_b, 0);
  digitalWrite(_c, 0);
  digitalWrite(_d, 1);
}
//////////////
///////////thoi gian

delay(thoi_gian);
digitalWrite(_led1, LOW);
digitalWrite(_led2, LOW);
digitalWrite(_led3, LOW);
digitalWrite(_led4, LOW);
////////////////////
}
