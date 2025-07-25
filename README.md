# Utility-Library

A lightweight and reusable C++ utility library that provides helpful tools for generating random data, swapping values, printing arrays, simple encryption/decryption, and more.

---

## 📦 Features

- ✅ Generate random integers, characters, words, and license-style keys
- ✅ Print arrays (horizontally or vertically)
- ✅ Shuffle arrays (int or string)
- ✅ Fill arrays with random numbers, words, or keys
- ✅ Swap variables (int, double, string, bool, char, or custom `clsDate`)
- ✅ Basic encryption and decryption using character shifting
- ✅ Utility tab formatting for aligned output

---

## 🛠️ Usage

```cpp
#include "clsUtil.h"

int main() {
    int arr[5];
    clsUtil::fillarraywithrandomnumbers(arr, 5, 1, 100);
    clsUtil::printarray(arr, 5);
    clsUtil::ShuffleArray(arr, 5);
    clsUtil::printarray(arr, 5);

    string key = clsUtil::Generatekey(clsUtil::mixletter);
    cout << "Generated Key: " << key << endl;

    string text = "Hello";
    string encrypted = clsUtil::encrypttext(text, 2);
    string decrypted = clsUtil::decrypttext(encrypted, 2);
    cout << encrypted << " -> " << decrypted << endl;

    return 0;
}
```

## Author

- 👤 Mazen Eltelbany
