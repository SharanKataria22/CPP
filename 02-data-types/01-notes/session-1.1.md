# 📊 Data Types in C++

## 🔹 What are Data Types?
Data types define the **type of data** a variable can store in C++. It helps the compiler decide:
- How much memory to allocate
- What operations can be performed on the variable

---

## 🔸 Basic Data Types in C++

| Type       | Keyword  | Example             | Size (Approx) |
|------------|----------|---------------------|---------------|
| Integer    | `int`    | `int age = 20;`     | 4 bytes       |
| Float      | `float`  | `float pi = 3.14;`  | 4 bytes       |
| Double     | `double` | `double bigNum = 3.14159;` | 8 bytes |
| Character  | `char`   | `char grade = 'A';` | 1 byte        |
| Boolean    | `bool`   | `bool passed = true;` | 1 byte     |

---

## 🔸 Type Modifiers

- `short`, `long`, `signed`, `unsigned`
```cpp
unsigned int num = 100;
long long bigNumber = 999999999;
