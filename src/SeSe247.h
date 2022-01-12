#ifndef SeSe247_h
#define SeSe247_h
#include "Arduino.h"

class SeSe247
{
  public:
    SeSe247();
    void KhoiTao_4led_7doan(byte a, byte b, byte c, byte d, byte led1, byte led2, byte led3, byte led4);
    void Hien_Thi(int so, int vi_tri, unsigned int thoi_gian);
  private:
    byte _a;
    byte _b;
    byte _c;
    byte _d;
    byte _led1;
    byte _led2;
    byte _led3;
    byte _led4;
};

#endif
