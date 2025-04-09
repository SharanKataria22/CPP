#include<iostream>
using namespace std;
int main(){

/*C++ Data Types Exercises
Easy Exercises:-

1.What is a data type in C++?
-> A data type in C++ defines the type of value 
   a variable can store, such as numbers, characters, or boolean values.

2.Which data type would you use to store a single character?
a) int
b) char
c) string
d) bool
-> b) char.

3.What is the size of a bool data type in C++?
-> 1 byte

4.Which data type is best for storing a whole number like 1000?
a) float
b) double
c) int
d) char
-> c) int

5.What does the float data type store?
-> float data type stores decimal digits approximately 6-7 decimal places .

6.What is the difference between float and double in C++?
-> floats stores approximately 6-7 decimal palces while double stores approximately
	15-16 decimal places but it up to operating systems.

7.What data type would you use to store a string like "Hello, World!"?
-> In string.

8.How do you declare a bool variable that stores true in C++?
-> 1

9.Which data type would you use to store the value 9.99?
a) int
b) double
c) bool
d) char
-> b) double

10.What is the value of a bool variable that is set to false?
-> 0
*/


/*Medium Exercises:-

11.What does the char data type store in C++? Provide an example.
-> char data type stores a single character.
Example: char gender = M; 

12.What is the maximum number of decimal places a float can store?
-> Approximately 6-7 decimal places.

13.Explain the difference between int and double data types with examples.
-> int data type stores integers/whole digits.
	Example: int a = 123456789;
-> double data type stores decimal digits approximately 15-16 decimal places 
	Example: double b = 5.123456789123456

14.How would you store the number 3.14159 in C++?
-> In float data type. */

/*15.Write a program that declares an integer variable age and assigns the value 25 to it. Output the value of age.
->*/ int age = 25;
	 cout<<"No.15:Age: "<<age<<endl;

/*16.Write a program that declares a string variable name and initializes it with "Alice". Then, output the value of name.
->*/ string name = "Alice";
	 cout<<"No.16:Name: "<<name<<endl;

/*17.How would you declare a char variable and assign it the value 'X'?
-> char alphabet = 'X';

18.What is the range of values an int data type can store?
-> In C++, the range of an int depends on the system architecture (32-bit or 64-bit) and the compiler.
	Minimum Value: -2,147,483,648 (-2³¹)
	Maximum Value: 2,147,483,647 (2³¹ - 1)

19.If you declare a variable as double and assign it a value 9.87654321, how many decimal places will be stored in the variable?
-> If we declare a variable as double and assign it a value 9.87654321, 
   8 decimal places will be stored in variable. */

/*20.Write a program that declares a bool variable isAdult and assigns true to it. Output the value of isAdult.
->*/ bool isAdult = true;
	cout<<"No.20:"<<"isAdult: "<<isAdult<<endl;


/*Hard Exercises:-

21.What would be the output of the following code?
int x = 5;
double y = 2.5;
double result = x * y;
cout << result;
-> 12.5 */

/*22.Write a program to calculate the total cost of 50 items, where each item costs 12.99. Use appropriate data types.
->*/

/*23.Explain how you would use e notation (scientific notation) for a floating-point number in C++.
->*/

/*24.Write a program that uses a bool variable to check whether a number is positive.
->*/

/*25.What happens if you try to store a decimal value like 3.14 in an int variable? Explain with an example.
->

26.Explain the concept of precision in float and double. Why would you choose double over float in most cases?
->*/

/*27.Write a program that uses float to store a scientific number 1.2e3 and outputs the result.
->*/

/*28.Write a program that stores a character as an ASCII value and prints the corresponding character (for example, storing 65 and printing 'A').
->*/

/*29.What will happen if you try to store a string value in a char variable?
->*/

/*30.Write a program that multiplies an int variable by a double variable and outputs the result. What is the data type of the result?
->*/


/*Bonus Challenge Questions:-

31.What data type would you use to store an ASCII value like 65, and why?
->

32.Explain why you might use float instead of double in a scenario where memory is limited.
->*/

/*33.Write a program that calculates the area of a circle, given the radius. Use the appropriate data types for radius and area.
->*/

/*34.In C++, what is the result of adding an int and a double?
->

35.Why is it important to understand the size of each data type in C++?
->*/

/*36.Write a program that assigns a floating-point number to a double variable and prints it in scientific notation.
->

37.What happens if you assign a string to a bool variable? Explain the error or behavior.
->*/

/*38.Write a program to check if a number is odd or even using bool variables and output the result.
->*/

/*39.What are the limits of the int type in C++? How would you overcome this limitation for larger numbers?
->

40.How do you convert a double to an int in C++ and what will happen to the decimal part? Provide an example.
->*/
}
