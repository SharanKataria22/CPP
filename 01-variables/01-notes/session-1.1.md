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


# C++ User Input

In C++, `cin` is used to receive input from the user. It is a predefined object in the C++ Standard Library that reads data from the keyboard. To extract (receive) input from the user, we use the **extraction operator (>>) with `cin`**.

### Using `cin` for User Input

The general syntax for user input is:

```cpp
cin >> variable;
```

Where `variable` is the name of the variable where the input will be stored.

### Example: Simple User Input

In this simple example, we ask the user to input a number, which is stored in the variable `x`, and then print it:

```cpp
int x;
cout << "Type a number: ";  // Prompt the user to enter a number
cin >> x;                   // Get user input from the keyboard
cout << "Your number is: " << x; // Output the input number
```

**Explanation:**
- `cout`: Used to display the message prompting the user to enter a value.
- `cin`: Used to take the user input and store it in the variable `x`.
- `<<` and `>>`: These are the insertion (for output) and extraction (for input) operators, respectively.

### Good to Know
- **`cout`** is pronounced "see-out", used for output, and uses the **insertion operator (<<)**.
- **`cin`** is pronounced "see-in", used for input, and uses the **extraction operator (>>)**.

### Example: Simple Calculator

Now, let's create a simple calculator where the user can input two numbers, and the program will display their sum:

```cpp
int x, y; // Declare two integer variables
int sum;  // Declare a variable to store the sum
cout << "Type a number: "; // Prompt user for first number
cin >> x;  // Get user input for the first number
cout << "Type another number: "; // Prompt user for second number
cin >> y;  // Get user input for the second number
sum = x + y; // Calculate the sum
cout << "Sum is: " << sum; // Output the sum
```

**Explanation:**
- `x` and `y`: Variables to store the numbers entered by the user.
- `sum`: A variable to store the result of adding `x` and `y`.
- The user is prompted to enter two numbers, and the sum is calculated and printed.

### Summary
- **`cin`** allows you to read user input in C++.
- It uses the **extraction operator (>>) to receive data from the user**.
- **`cout`** is used for displaying output.
- You can create interactive programs, like a calculator, by using `cin` to gather user input and `cout` to display the result.

This is the basic way to handle user input and output in C++.
