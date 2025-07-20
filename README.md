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

## 📦 How to Run<br>

1-**Clone the repo:**

```bash
git clone https://github.com/Mazen-Eltelbany/Utility-Library.git
```

2-**Navigate to the project:**

```bash
1-cd Utility-Library
2-cd Examples
```

3- **Compile:**
"If you don't have a g++ compiler download from this video"
<a href="https://youtu.be/GxFiUEO_3zM">The Installation guide</a>

```bash
g++ Utility-Library.cpp -o UL
```

4- **Run:**

```bash
./UL
```

## Author

- 👤 Mazen Eltelbany
