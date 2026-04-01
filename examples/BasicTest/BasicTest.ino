#include <KeyboardES_ES_Beetle.h>

void setup() {
  delay(4000);
  KeyboardES_ES_Beetle::begin();
  delay(400);

  KeyboardES_ES_Beetle::printlnES("TEST COMPLET:");
  KeyboardES_ES_Beetle::printlnES("@ / \\ |");
  KeyboardES_ES_Beetle::printlnES("[ ]");
  KeyboardES_ES_Beetle::printlnES("! \" # $ % & ( ) = ?");
  KeyboardES_ES_Beetle::printlnES("¡ ¿");
  KeyboardES_ES_Beetle::printlnES("mail: prueba@test.com");
  KeyboardES_ES_Beetle::printlnES("web: https://www.google.com");

  KeyboardES_ES_Beetle::end();
}

void loop() {}
