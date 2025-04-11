# ⚙️ C++ Operators

C++ operators are special symbols used to perform operations on variables and values. These operations include arithmetic calculations, comparisons, logical evaluations, and more.

| Operator Type | Description |
|---------------|-------------|
| Arithmetic    | Basic math operations like +, -, *, /, % |
| Assignment    | Assigning values using =, +=, -=, etc. |
| Comparison    | Comparing values using ==, !=, >, <, etc. |
| Logical       | Boolean logic with &&, ||, ! |

```cpp
int a = 5, b = 3;
int sum = a + b;
cout << "Sum: " << sum << endl;  // Output: Sum: 8
```

---

## 1. Arithmetic Operators
Arithmetic operators are used to perform basic mathematical operations.

| Operator | Description       | Example     | Output |
|----------|-------------------|-------------|--------|
| `+`      | Addition           | `10 + 3`    | `13`   |
| `-`      | Subtraction        | `10 - 3`    | `7`    |
| `*`      | Multiplication     | `10 * 3`    | `30`   |
| `/`      | Division           | `10 / 3`    | `3`    |
| `%`      | Modulus            | `10 % 3`    | `1`    |

```cpp
int a = 10, b = 3;
cout << "Addition: " << (a + b) << endl;      // Output: 13
cout << "Subtraction: " << (a - b) << endl;   // Output: 7
cout << "Multiplication: " << (a * b) << endl; // Output: 30
cout << "Division: " << (a / b) << endl;      // Output: 3
cout << "Modulus: " << (a % b) << endl;       // Output: 1
```

---

## 2. Assignment Operators
These operators are used to assign values to variables.

| Operator | Description                | Example    | Result |
|----------|----------------------------|------------|--------|
| `=`      | Assign                     | `x = 5`     | `5`    |
| `+=`     | Add and assign             | `x += 3`    | `8`    |
| `-=`     | Subtract and assign        | `x -= 2`    | `6`    |
| `*=`     | Multiply and assign        | `x *= 4`    | `24`   |
| `/=`     | Divide and assign          | `x /= 2`    | `12`   |
| `%=`     | Modulus and assign         | `x %= 5`    | `2`    |

```cpp
int x = 5;
x += 3; // x = x + 3 → x = 8
x -= 2; // x = x - 2 → x = 6
x *= 4; // x = x * 4 → x = 24
x /= 2; // x = x / 2 → x = 12
x %= 5; // x = x % 5 → x = 2
```

---

## 3. Comparison Operators
Used to compare two values. They return `true` or `false`.

| Operator | Description         | Example     | Result |
|----------|---------------------|-------------|--------|
| `==`     | Equal to            | `5 == 10`   | `0`    |
| `!=`     | Not equal to        | `5 != 10`   | `1`    |
| `>`      | Greater than        | `5 > 10`    | `0`    |
| `<`      | Less than           | `5 < 10`    | `1`    |
| `>=`     | Greater than or equal | `5 >= 10` | `0`    |
| `<=`     | Less than or equal    | `5 <= 10` | `1`    |

```cpp
int a = 5, b = 10;
cout << (a == b) << endl;  // false (0)
cout << (a != b) << endl;  // true (1)
cout << (a > b) << endl;   // false (0)
cout << (a < b) << endl;   // true (1)
cout << (a >= b) << endl;  // false (0)
cout << (a <= b) << endl;  // true (1)
```

---

## 4. Logical Operators
Used to combine conditional statements.

| Operator | Description           | Example         | Result |
|----------|-----------------------|-----------------|--------|
| `&&`     | Logical AND           | `true && false` | `0`    |
| `\|\|`  | Logical OR            | `true  \|\| false` | `1` |
| `!`      | Logical NOT           | `!true`         | `0`    |

```cpp
bool x = true, y = false;
cout << (x && y) << endl; // false (0)
cout << (x || y) << endl; // true (1)
cout << (!x) << endl;     // false (0)
```

---
