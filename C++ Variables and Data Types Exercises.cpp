#include<iostream>
using namespace std;
int main(){
	
//C++ Variables and Data Types Exercises
//Descriptive Questions:-
	
/*1-What is a variable in C++?
	Define a variable and explain its purpose in C++.
->Veriable is container in C++. In which we stores datas.*/
	
/*2-What data type would you use to store an age in C++?
	Give an example of how to declare and initialize such a variable.
->We use int data type to store an age in C++
	For Example: int age=17 etc*/
	
/*3-What does the int data type store?
	Provide an example
->It stores the Whole numbers Integers numbers.
	For Example:123456789 etc*/
	  
/*4-Explain the difference between float and double data types
->Float and double both are data type in which we stores decimals numbers
	defference b/w them are float contains 6-7 numbers after piont and
	double contains 15-16 numbers after point.*/
	  
/*5-What data type would you use to store a character?
	Provide an example of how to declare and initialize this variable.
->We use char data type to store a character
	For Example:(char grade= A)*/
	  
/*6-What is the default value of a bool variable in C++?
	Provide a short example where true and false values are used*/
	
/*7-Declare a variable x of type int and assign it the value of 10.
-> int x = 10*/
	
/*8-How do you assign one value to multiple variables in C++?
	Provide an example using variables a, b, and c.
->*/
	
/*9-What is the purpose of using the const keyword in C++?
	Write a short example where a constant variable is 
->If we use the const keyword in a dataType then that variABLE is locked
	then we cant modify that variable's value
	For Example: const int x = 5; now this dataType locked.*/
	
/*10-What is the rule for naming variables in C++?
	List at least three naming conventions or rules for valid identifiers.
->(i) cannot use same variable name again.
  (ii) cannot use the space in veriable name
  (iii) cannot use the special characters in veriable name
  (iv) cannot use the numbers/digits in variable name*/
	  
//Code:-
		  
/*11-Write a program that declares an integer variable num and prints its value
->*/
	int num = 12345; 
	cout<<"Q11:-"<<num<<endl;
	
/*12-Write a program that calculates and prints the perimeter of a rectangle.
	Assume the length is 10 and the width is 5.
->*/
	int length = 10;
	int width = 5;
	int Perimeter_Of_A_Rectangle = 2*(length+width);
	cout<<"Q12:-Perimeter of a Rectangle:"<<Perimeter_Of_A_Rectangle<<endl;
	
/*13-What happens if you try to change the value of a constant variable?
	Write a program that demonstrates this.
-> It gives Error.
	 For Example:-*/
	int xy = 100;
//	z = 200
//	We cannot do this type of modification;
	
/*14-Create a program that uses a string variable to store your name
	and prints it.
->*/
	string MyName = "Sharan Kataria";
	cout<<"Q14:-My Name:"<<MyName<<endl;
	
/*15-Given the following data, write a program to calculate the total fee 
	of a student:
	Tuition Fee: 5000.75
	Hostel Fee: 1000.50
	Books Fee: 300.20
->*/
	float TutionFee = 5000.75;
	float HostelFee = 5000.75;
	float BooksFee = 5000.75;
	float TotalFee = TutionFee+HostelFee+BooksFee;
	cout<<"Q15:-Total Fees:"<<TotalFee<<endl;
	
/*16-Write a program to compute the area of a triangle.
	Formula: area = 0.5 * base * height
->*/
	
/*17-Declare a variable x of type float and assign it a value.
	Write a program to display x with 2 decimal places
->*/
	
/*18-What is the difference between char and string in C++?
	Write a program that demonstrates both.
->In char variable we can store only a single Character but in String variable
	we can store more than one characters/any word.
	For Example:*/ 
	char gender = 'M';
	string nationality = "Pakistani";
	cout<<"Q18:-";
	cout<<"char:Gender "<<gender<<endl;
	cout<<"     ";
	cout<<"string:Nationality "<<nationality<<endl;
	
/*19-Create a program that declares three integer variables:
	x, y, and z. Initialize x to 5, y to 10, and z to 20. Print their sum
->*/
	int x = 5;
	int y = 10;
	int z = 20;
	int SumOfNum = x+y+z;
	cout<<"Q19:-"<<SumOfNum<<endl; 
		
/*20-Write a program that calculates the area and circumference of a circle.
	Use the formula Area = p * radius^2 and Circumference = 2 * p * radius.
	Assume radius = 7.
->*/
	
/*21-Create a program that accepts two integer inputs from the user,
	adds them, and displays the sum.
->*/
	int num1, num2, sum;
	cout<<"Q21:-"<<"Enter First Number:";
	cin>> num1;
	cout<<"     "<<"Entre Second Number:";
	cin>> num2;
	sum = num1 + num2;
	cout<<"     "<<"The sum is:"<<sum<<endl;
	
/*22-Write a program that calculates and prints the average of three numbers 
	using double variables.
	Accept the numbers as inputs from the user.
->*/
	
/*23-Create a program to calculate the volume of a cylinder.
	Formula: Volume = p * radius^2 * height. Assume radius = 5 and height = 10.
->*/
	
/*24-Write a program that uses a const variable to store the value of PI. 
	Use this constant to calculate the area of a circle given a radius from the user
->*/
	
/*25-**Write a program that calculates the Simple Interest using the formula: 
	Interest = (Principal * Rate * Time) / 100. Assume Principal = 1000, Rate = 5, and Time = 3.
->*/
	
/*26-Write a program to convert a temperature from Fahrenheit to Celsius.
	Formula: Celsius = (Fahrenheit - 32) * 5/9
->*/
	
/*27-Write a program that calculates the area of a rectangle, square, and triangle.
	For rectangle: Area = length * width
	For square: Area = side * side
	For triangle: Area = 0.5 * base * height
->*/
	
/*28-Write a program that declares a char variable and stores a character from the user. 
	Print the ASCII value of the character.
->*/
	
/*29-Write a program to calculate the factorial of a number using a loop.
->*/
	
/*30-Create a program that stores a student’s information (ID, age, grade, and fees) 
	using variables and prints the details.
->*/
	
/*31-Write a program that uses both int and double variables to calculate the total cost 
	of an item including tax. Assume the cost of the item is 50.75 and tax rate is 8.5%.
->*/
	
}