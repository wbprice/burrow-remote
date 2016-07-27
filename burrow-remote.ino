#include <IRremoteESP8266.h>

/*
 * Uses the IRremoteESP8266 library to interact with the Haier AC unit in my window.
 */

IRsend irsend(0); //an IR led is connected to GPIO pin 0

const unsigned long POWER_BUTTON = 0x19F69867;
const unsigned long MODE_BUTTON = 0x19F610EF;
const unsigned long SPEED_BUTTON = 0x19F620DF;
const unsigned long TIMER_BUTTON = 0x19F658A7;
const unsigned long TEMP_UP_BUTTON = 0x19F6A05F;
const unsigned long TEMP_DOWN_BUTTON = 0x19F6906F;

void setup()
{
  irsend.begin();
  Serial.begin(9600);
}

void loop() {
  irsend.sendNEC(POWER_BUTTON, 32);
  delay(5000);
}
