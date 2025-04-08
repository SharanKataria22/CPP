# C++ Variables and Data Types

## Introduction to Variables
Variables in C++ are used to store data values. They are essentially containers that hold values that can be used and modified throughout the program. 

### Data Types in C++

1. **int**: Stores whole numbers, both positive and negative, without decimals.
   - Example: `int age = 25;`

2. **double**: Stores numbers with decimals (floating-point numbers).
   - Example: `double price = 99.99;`

3. **char**: Stores a single character enclosed in single quotes.
   - Example: `char grade = 'A';`

4. **string**: Stores a sequence of characters (text), enclosed in double quotes.
   - Example: `string name = "John";`

5. **bool**: Stores a value representing true or false.
   - Example: `bool isActive = true;`

## Declaring Variables

### Syntax for Declaring a Variable:
```cpp
type variableName = value;
```

### Example of Variable Initialization:
```cpp
int myNum = 5;           // Integer
double myFloatNum = 5.99; // Floating-point number
char myLetter = 'D';      // Character
string myText = "Hello";  // String
bool myBoolean = true;    // Boolean
```

### Add Variables Together:
To add variables together, use the `+` operator:
```cpp
int x = 5;
int y = 6;
int sum = x + y;
cout << sum; // Output: 11
```

## Declaring Multiple Variables

### Declare Many Variables:
You can declare multiple variables of the same type on the same line:
```cpp
int x = 5, y = 6, z = 50;
cout << x + y + z; // Output: 61
```

### Assigning One Value to Multiple Variables:
You can assign the same value to multiple variables:
```cpp
int x, y, z;
x = y = z = 50;
cout << x + y + z; // Output: 150
```

## C++ Identifiers
An identifier is a name used to identify a variable. It must be unique in the program. 

### Rules for Identifiers:
- Names can contain letters, digits, and underscores.
- Names must begin with a letter or an underscore (_).
- Identifiers are case-sensitive (`myVar` and `myvar` are different variables).
- Names cannot contain spaces or special characters like `!`, `#`, `%`, etc.
- Reserved keywords like `int`, `char`, `bool`, etc., cannot be used as identifiers.

### Example of Good Naming:
```cpp
int minutesPerHour = 60; // Clear and understandable
```

### Example of Poor Naming:
```cpp
int m = 60; // Not very clear
```

## Constants in C++

A constant is a variable whose value cannot be changed once it is set. You can declare a constant using the `const` keyword.

### Syntax:
```cpp
const type constantName = value;
```

### Example:
```cpp
const int myNum = 15; // myNum will always be 15
```

If you try to modify a constant variable, you will get an error:
```cpp
myNum = 10; // Error: cannot assign to a constant variable
```

### Example with Constants:
```cpp
const float PI = 3.14;  // PI is a constant and cannot be changed
const int minutesPerHour = 60; // Minutes per hour is a constant value
```

### Important Notes on Constants:
- Constants must be initialized at the time of declaration.
  - Correct:
    ```cpp
    const int minutesPerHour = 60;
    ```
  - Incorrect:
    ```cpp
    const int minutesPerHour;  // Error: must initialize a constant
    minutesPerHour = 60;       // Error: cannot assign to a constant
    ```

## Practical C++ Variables Examples

### Example 1: Student Data
A program that stores and prints information about a student.
```cpp
int studentID = 15;
int studentAge = 23;
float studentFee = 75.25;
char studentGrade = 'B';

// Output:
cout << "Student ID: " << studentID << "\n";
cout << "Student Age: " << studentAge << "\n";
cout << "Student Fee: " << studentFee << "\n";
cout << "Student Grade: " << studentGrade << "\n";
```

### Example 2: Calculate the Area of a Rectangle
A program to calculate the area of a rectangle using length and width.
```cpp
int length = 4;
int width = 6;
int area;

// Calculate the area
area = length * width;

// Output:
cout << "Length: " << length << "\n";
cout << "Width: " << width << "\n";
cout << "Area of the rectangle: " << area << "\n";
```

## Conclusion
Variables are essential for storing and manipulating data in a program. Understanding how to declare and use different types of variables, constants, and identifiers helps in writing clean, readable, and maintainable code in C++.
