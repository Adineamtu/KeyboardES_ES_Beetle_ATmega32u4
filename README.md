# KeyboardES_ES_Beetle_ATmega32u4

Arduino HID keyboard library for Spanish (ES-ES) layout on ATmega32U4 (Beetle), with correct AltGr and symbol mapping for Windows.

> ⚠️ This library is functional but still under active development (work in progress).

---

## ✨ Features

- ✔ Full ES-ES keyboard mapping (tested on Windows)
- ✔ Correct AltGr handling (@, \, |, [, ], €, etc.)
- ✔ Proper SHIFT symbols (! " # $ % & ( ) = ?)
- ✔ Spanish-specific characters (¡, ¿, ñ, Ñ)
- ✔ UTF-8 support (basic)
- ✔ Stable HID timing (prevents missed keystrokes)

---

## 🧪 Tested Environment

- Windows (Spanish – Spain layout)
- Arduino Micro / Beetle (ATmega32U4)
- Standard text editors and browsers

---

## 📦 Installation

### Method 1 – ZIP (recommended)

1. Go to the repository:
   https://github.com/Adineamtu/KeyboardES_ES_Beetle_ATmega32u4

2. Click **Code → Download ZIP**

3. In Arduino IDE:
   - Sketch → Include Library → Add .ZIP Library

---

## 🚀 Usage

~~~cpp
#include <KeyboardES_ES_Beetle.h>

void setup() {
  delay(3000);
  KeyboardES_ES_Beetle::begin();

  KeyboardES_ES_Beetle::printlnES("Hola mundo!");
  KeyboardES_ES_Beetle::printlnES("@ / \\ | €");

  KeyboardES_ES_Beetle::end();
}

void loop() {}

🧪 Example (Full Test)

See:
examples/BasicTest/BasicTest.ino


📌 Expected Output

@ / \ | €
[ ]
! " # $ % & ( ) = ?
¡ ¿
mail: prueba@test.com
web: https://www.google.com

⚠️ Notes
Designed for Spanish (Spain) keyboard layout on Windows
Other layouts may produce different results
Timing delays are important for correct HID behavior

🚧 Limitations
Not fully tested on Linux/macOS
UTF-8 support is basic
Some edge-case key combinations may require adjustment

🤝 Contributions

Contributions, fixes and improvements are welcome!

📜 License
MIT License
