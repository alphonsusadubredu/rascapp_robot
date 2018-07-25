#include "rascapp_joy.h"

#define UP 6
#define DOWN 7
#define LEFT 8
#define RIGHT 9

void setup()
{
        setupPins();
        initializeJoy();
        
        
}

void loop()
{
        char inst = getInst();
        Serial.print(inst);
        init_pins();
        delay(50);
}

JoyData_T getControllerData(void)
{
        JoyData_T data = getBlankData();
        data.UpOn = !digitalRead(UP);
        data.DownOn = !digitalRead(DOWN);
        data.LeftOn = !digitalRead(LEFT);
        data.RightOn = !digitalRead(RIGHT);

        return data;

}

char getInst(void)
{
  char inst = 'c';
  if (!digitalRead(UP)) inst = 'u';
  else if (!digitalRead(DOWN)) inst = 'd';
  else if (!digitalRead(LEFT)) inst = 'l';
  else if (!digitalRead(RIGHT)) inst = 'r';
  else if (digitalRead(UP) and digitalRead(DOWN) and digitalRead(LEFT) and digitalRead(RIGHT))
    inst = 'c';
  
  return inst;
    
}

void setupPins(void)
{
        for (int i=6; i<10; i++)
        {
                pinMode(i, INPUT);
                digitalWrite(i, HIGH);
        }
}

void init_pins(void)
{
  for (int i=6; i<10; i++)
    digitalWrite(i, HIGH);
}
