# KeyboardES_ES_Beetle_ATmega32u4

Arduino HID keyboard library for Spanish (ES-ES) layout on ATmega32U4 (Beetle), with correct AltGr and symbol mapping for Windows.

---

## ✨ Features

- ✔ Full ES-ES keyboard mapping (tested on Windows)
- ✔ Correct AltGr handling (`@`, `\`, `|`, `[ ]`, `€`)
- ✔ Proper SHIFT symbols (`! " # $ % & ( ) = ?`)
- ✔ Spanish-specific characters (`¡`, `¿`, `ñ`, `Ñ`)
- ✔ UTF-8 support (basic)
- ✔ Stable HID timing (prevents missed keystrokes)

---

## ⚙️ Tested Environment

- Windows (Spanish – Spain layout)
- Arduino Micro / Beetle (ATmega32U4)
- Standard text editors and browsers

---

## 🚀 Installation

1. Download or clone the repository
2. Copy the `src/` folder into your Arduino project  
   OR install as a custom library

---

## 📦 Usage

```cpp
#include <KeyboardES_ES_Beetle.h>

void setup() {
  delay(4000);
  KeyboardES_ES_Beetle::begin();

  KeyboardES_ES_Beetle::printlnES("Hola mundo!");
  KeyboardES_ES_Beetle::printlnES("mail: prueba@test.com");
  KeyboardES_ES_Beetle::printlnES("web: https://www.google.com");

  KeyboardES_ES_Beetle::end();
}

void loop() {}

🧪 Example (Full Test)
KeyboardES_ES_Beetle::printlnES("@ / \\ |");
KeyboardES_ES_Beetle::printlnES("[ ]");
KeyboardES_ES_Beetle::printlnES("! \" # $ % & ( ) = ?");
KeyboardES_ES_Beetle::printlnES("¡ ¿");

Expected output:

@ / \ |
[ ]
! " # $ % & ( ) = ?
¡ ¿




