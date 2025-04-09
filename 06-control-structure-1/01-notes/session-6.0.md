# 🌟 C++ Control Structures Notes

Control structures in C++ are used to control the flow of a program — deciding which block of code should run based on certain conditions.

## ✅ Conditional Statements
Conditional statements are used for decision making — when different code should run based on different conditions.

---

### 🔹 if Statement
Executes a block of code if the condition is true.

```cpp
if (marks >= 50) {
    cout << "Pass";
}
```

---

### 🔹 if...else Statement
Checks one of the two conditions.

```cpp
if (marks >= 50) {
    cout << "Pass";
} else {
    cout << "Fail";
}
```

---

### 🔹 else if Ladder
Used to check multiple conditions one by one.

```cpp
if (marks >= 90) {
    cout << "Grade A";
} else if (marks >= 75) {
    cout << "Grade B";
} else if (marks >= 50) {
    cout << "Grade C";
} else {
    cout << "Grade D";
}
```

> 📝 **Note:**
> - Conditions are checked from top to bottom.
> - Once a true condition is found, remaining ones are skipped.

---

### 🔹 Shorthand if else (Ternary Operator)
Used for quick one-line condition checks.

```cpp
int num = 5;
string result = (num % 2 == 0) ? "Even" : "Odd";
cout << result;
```

📌 **Syntax:**
```cpp
(condition) ? true_part : false_part;
```

---

## 🎯 switch Statement
The `switch` statement is used for selecting among multiple fixed options (usually integers or characters).

```cpp
int day = 3;
switch(day) {
    case 1: cout << "Monday"; break;
    case 2: cout << "Tuesday"; break;
    case 3: cout << "Wednesday"; break;
    case 4: cout << "Thursday"; break;
    case 5: cout << "Friday"; break;
    case 6: cout << "Saturday"; break;
    case 7: cout << "Sunday"; break;
    default: cout << "Invalid Day";
}
```

> 📝 **Note:**
> - Use `break` after each case to prevent fall-through.
> - `default` is optional but useful for handling invalid inputs.

---

## 📌 Summary Table

| Statement Type      | Use Case                              | Example Keyword     |
|---------------------|----------------------------------------|---------------------|
| `if`                | Simple condition check                 | `if`                |
| `if...else`         | True/False decision                    | `if`, `else`        |
| `else if` ladder    | Multiple conditions                    | `else if`           |
| Ternary Operator    | One-line condition                     | `? :`               |
| `switch`            | Multiple fixed choices                 | `switch`, `case`    |

---
