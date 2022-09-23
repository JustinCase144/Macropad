
#include "Keyboard.h"
#include "Keyboard_sv_SE.h"

const int But1 = 2;
const int But2 = 3;
const int But3 = 4;
const int But4 = 5;
const int But5 = 6;
const int But6 = 7;
const int But7 = 8;
const int But8 = 9;
int inMin = 2;
int inMax = 9;
         
void setup() {
Serial.begin(9600);

Serial.println("Alustetaan");

  for(int i=inMin; i<=inMax; i++)
{
   pinMode(i, INPUT_PULLUP);
}

  Keyboard.begin(KeyboardLayout_sv_SE);

Serial.println("Alustus ok.");
}
void loop() {
    if (digitalRead(But1) == LOW){
      Serial.println("1");
      Keyboard.press(KEY_LEFT_CTRL);
      Keyboard.press('c');
      Keyboard.releaseAll();
     
      //digitalWrite(xmitLed, HIGH);
      delay(200);
      }
       
       if (digitalRead(But2) == LOW){
        Serial.println("2");
      Keyboard.press(KEY_LEFT_CTRL);
      Keyboard.press('v');
      delay(400);
      Keyboard.press(KEY_RETURN);
      delay(100);
      Keyboard.releaseAll();
        
        delay(200);
       }
    if (digitalRead(But3) == LOW){
        Serial.println("3");
        //Keyboard.print("Even panty-san is a filthy furry :pillowyes:");
      Keyboard.press(KEY_LEFT_ALT);
      Keyboard.press(KEY_TAB);
      Keyboard.releaseAll();
      delay(50);
      Keyboard.press(KEY_LEFT_CTRL);
      Keyboard.press('v');
      delay(400);
      Keyboard.press(KEY_RETURN);
      delay(100);
      Keyboard.releaseAll();
      
        delay(200);
       }
       if (digitalRead(But4) == LOW){
        Serial.println("4");
        delay(200);
       }
       if (digitalRead(But5) == LOW){
        Serial.println("5");
        delay(200);
       }
       if (digitalRead(But6) == LOW){
        Serial.println("6");
        delay(200);
       }
       if (digitalRead(But7) == LOW){
        Serial.println("7");
        delay(200);
       }
       if (digitalRead(But8) == LOW){
        Serial.println("8");
        Keyboard.press(KEY_PRINT_SCREEN);
        Keyboard.releaseAll();
        delay(200);
       }



       
    else {
    Keyboard.releaseAll();
    // digitalWrite(xmitLed, LOW);
    }
}
