#ifndef TEXT_H
#define TEXT_H

#include <Arduino.h>
#include <alarmtest.h>
using namespace AlarmWork;

namespace TEXTAlarm
{
    class TEXTAl: public AlarmSystem{
        
        public:    
            void tftPrintTest(Adafruit_ST7789 tft);
            void play_TEXT_Alarm(Alarmlev allev, Adafruit_ST7789 tft, DisplayCheck text,  int freq);
            void flicker(Adafruit_ST7789 tft, int freq);
    }; 

};

#endif