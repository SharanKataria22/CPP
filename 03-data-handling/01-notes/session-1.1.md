# 📥 Data Handling in C++

## 🔹 What is Data Handling?
Data handling in C++ refers to:
- **Taking input** from the user
- **Displaying output** to the screen
- **Formatting and managing** data flow

---

## 🔸 Input & Output Syntax

```cpp
#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "You are " << age << " years old.";
    return 0;
}
