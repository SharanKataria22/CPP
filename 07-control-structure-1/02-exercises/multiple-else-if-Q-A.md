## Multiple Else If Questions & Answers:

### 1. Scenario: Student Grading System  
**Problem:** Write a C++ program that takes the marks of a student as input and prints the grade according to the following conditions:  
Marks >= 90: Grade A  
Marks >= 75 and < 90: Grade B  
Marks >= 50 and < 75: Grade C  
Marks < 50: Grade D  

**Input:**  
Marks: 85  

**Output:**  
Grade: B  

```cpp
#include<iostream>
using namespace std;
int main(){
	int marks = 85;
	if ( marks >= 90 ){
		cout<<"Grade A"<<endl;
	}
	else if ( marks >= 75 && marks < 90 ){
		cout<<"Grade B"<<endl;
	}
	else if ( marks >= 50 && marks < 75 ){
		cout<<"Grade C"<<endl;
	}
	else if ( marks < 50 ){
		cout<<"Grade D"<<endl;
	}
}
