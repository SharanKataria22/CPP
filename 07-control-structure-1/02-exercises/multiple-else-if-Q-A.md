
# Multiple Else If Questions & Answers

This document includes several C++ problems using multiple `else if` statements.

---

## 1. Student Grading System

**Problem:**  
Write a C++ program that takes the marks of a student as input and prints the grade according to the following conditions:

- Marks >= 90: Grade A  
- Marks >= 75 and < 90: Grade B  
- Marks >= 50 and < 75: Grade C  
- Marks < 50: Grade D

**Example:**

**Input:**
```
Marks: 85
```

**Output:**
```
Grade: B
```

**C++ Code:**
```cpp
#include<iostream>
using namespace std;
int main(){
    int marks;
    cout << "Enter your Marks: ";
    cin >> marks;

    if (marks >= 90){
        cout << "Grade A" << endl;
    }
    else if (marks >= 75 && marks < 90){
        cout << "Grade B" << endl;
    }
    else if (marks >= 50 && marks < 75){
        cout << "Grade C" << endl;
    }
    else {
        cout << "Grade D" << endl;
    }
}
```

---

## 2. Age Category

**Problem:**  
Write a program that takes a person's age as input and categorizes them into the following:

- Age <= 12: Child  
- Age > 12 and <= 19: Teenager  
- Age > 19 and <= 65: Adult  
- Age > 65: Senior Citizen

**Example:**

**Input:**
```
Age: 25
```

**Output:**
```
Category: Adult
```

**C++ Code:**
```cpp
#include<iostream>
using namespace std;
int main(){
    int persons_age;
    cout << "Enter your Age: ";
    cin >> persons_age;

    if (persons_age <= 12){
        cout << "Category: Child" << endl;
    }
    else if (persons_age <= 19){
        cout << "Category: Teenager" << endl;
    }
    else if (persons_age <= 65){
        cout << "Category: Adult" << endl;
    }
    else {
        cout << "Category: Senior Citizen" << endl;
    }
}
```

---

## 3. Number Comparison

**Problem:**  
Write a program that takes three integers and determines the largest of the three using multiple `else if` statements.

**Example:**

**Input:**
```
a = 10, b = 15, c = 12
```

**Output:**
```
Largest Number: 15
```

**C++ Code:**
```cpp
#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c) {
        cout << "Largest: " << a << endl;
    }
    else if (b >= a && b >= c) {
        cout << "Largest: " << b << endl;
    }
    else {
        cout << "Largest: " << c << endl;
    }
}
```

---

## 4. Loan Approval System

**Problem:**  
Create a loan approval program where the eligibility for a loan is based on credit score:

- Credit Score >= 750: High Priority Approval  
- Credit Score >= 600 and < 750: Medium Priority Approval  
- Credit Score < 600: Low Priority or Denied

**Example:**

**Input:**
```
Credit Score: 670
```

**Output:**
```
Loan Approval: Medium Priority Approval
```

**C++ Code:**
```cpp
#include<iostream>
using namespace std;
int main(){
    int credit_score;
    cout << "Enter your Credit Score: ";
    cin >> credit_score;

    if (credit_score >= 750){
        cout << "Loan Approval: High Priority Approval" << endl;
    }
    else if (credit_score >= 600){
        cout << "Loan Approval: Medium Priority Approval" << endl;
    }
    else {
        cout << "Loan Approval: Low Priority Approval" << endl;
    }
}
```

---

## 5. Temperature Evaluation

**Problem:**  
Write a program that takes the temperature as input and outputs:

- Temperature <= 0: Freezing  
- Temperature > 0 and <= 15: Cold  
- Temperature > 15 and <= 30: Warm  
- Temperature > 30: Hot

**Example:**

**Input:**
```
Temperature: 18
```

**Output:**
```
Temperature Status: Warm
```

**C++ Code:**
```cpp
#include<iostream>
using namespace std;
int main(){
    int temperature;
    cout << "Enter Temperature: ";
    cin >> temperature;

    if (temperature <= 0){
        cout << "Freezing" << endl;
    }
    else if (temperature <= 15){
        cout << "Cold" << endl;
    }
    else if (temperature <= 30){
        cout << "Warm" << endl;
    }
    else {
        cout << "Hot" << endl;
    }
}
```

---
