// Learning C++
// -------------
// 
// #include <iostream>
// using namespace std;
// 
// int main () {
// 	cout << "Hello, World!" << "\n";
// 	return 0;
// }
// 
// #include <iostream> is a header file that lets us work with the input and output
// objects, such as cout.
// 
// using namespace std, means that we can use names for objects and variables from the
// standard library.
// 
// int main() {}, is called function, any code inside the curly brackets will get
// executed.
// 
// cout, is an object used together with the insertion operator (<<) to output/print,
// text.
// 
// return 0; ends the main function.
// 
// if the line "using namespace std;" is not used we will have to use "cout" like
// std::cout << "Hello, World!" << "\n";
// 
// both \n and endl are use to break the lines, \n is the preferred way.
// 
// single line comments using // and multiline comments start with slash star and end
// with star slash.
// ---------------------------------------------------------------------------------
//
// 
// variables
//
// int - stores integers without decimals
// double - stores floating point numbers with decimals such as 19.99 or -19.99.
// char - stores single characters, such as 'a' or 'B'. Such value are surrounded by
//				single quotes.
// string - stores text, such as "Hello World!". String values are surrounded by
// double quotes.
// bool - stores values with two states: true or false.
//
// int myNum = 15;
// myNum = 10; // now myNum is 10.
//
// double myFloat = 5.99;
// char myLetter = 'D';
// string myText = "Hello";
// bool myBoolean = True;
//
// int myAge = 35;
// cout << "I am " << myAge << " years old.";
//
// int x = 5, y = 6, z = 50;
// cout << x + y + z;
//
// int x, y, z;
// x = y = z = 50;
// cout << x + y + z;
//
// const int myNum = 15; // mynum will always be 15
// myNum = 10; // error: assignment of read-only variable 'myNum'
//-----------------------------------------------------------------------------------
//
//
// User Input
// 
// cin is a predefined variable that reads data from the keyboard with extraction
// operator (>>).
//
// int x;
// cout << "Type a number: ";
// cin >> x;
// cout << "Your number is: " << x;
//-----------------------------------------------------------------------------------
//
//
// boolean - 1 byte -----stores true or false
// char - 1 byte	-------stores a single character/letter/number, or ASCII value
// int - 2 or 4 bytes ---stores whole numbers without decimals
// float - 4 bytes ------stores fractional numbers, containing one or more decimals
//											 sufficient for storing 7 decimal digits
// double - 8 bytes -----stores fractional numbers, containing one or more decimals.
//											 Sufficient for storing 15 decimal digits.
// precision of floats is only six or seven decimal digits, while double variables
// have a precision of about 15 digits.
//
//
// float f1 = 35e3; // -> 35000
// double d1 = 12E4; // -> 120000
//
// char a = 65, b = 66, c = 67;
// cout << a; cout << b; cout << c; // -> ABC
//-----------------------------------------------------------------------------------
//
//
// The string type is used to store a sequence of characters. This is not a built in
// type, but it behaves like one in its most basic usage. String values must be
// surrounded by double quotes.
// To use strings, you must include an additional header file in the source code, the
// <string> library.
//
// #include <string>
//
// string greeting = "Hello!";
// cout << greeting; // -> Hello!
//
// Arithematic operators: addition(+),
//												subtraction(-),
//												multiplication(*),
//												division(/),
//												modulus(%),
//												increment(++),
//												decrement(--)
//
// Assignment operators: (=), (+=), (-=), ...
//
// Comparison operators: Equal to(==),
//											 Not equal to(!=),
//											 Greater than(>),
//											 Less than(<),
//											 Greater than or equal to(>=),
//											 Less than or equal to(<=)
//
// Logical Operators: Logical and (&&),
//										Logical or (||),
//										Logical not (!)
//
// String concatenation: 
//				string firstName = "John";
//				string lastName = "Doe";
//				string fullName = firstName + " " + lastName;
//				cout << fullName; // -> John Doe
//
// Append: string firstName = "John ";
//				 string lastName = "Doe";
//				 string fullName = firstName.append(lastName);
//				 cout << fullName;
//
// *** append is faster than "+" for concatination of the strings
//
// If you try to add number to a string an error occurs.
//
// string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
// cout << "The length of the txt string is: " << txt.length(); // -> 26
// cout << "The length of the txt string is: " << txt.size(); // -> 26
//
// string myString = "Hello";
// cout << myString[0]; // -> H
// myString[0] = 'J';
// cout << myString; // -> Jello
//----------------------------------------------------------------------------------
//
//
// UserInputStrings
// 
// cin allows us to take a string as an input from the user, however cin considers a
// space as terminating character which means it can only display a single word.
//
// so when working with strings we use getline() to read a line of text. It takes cin
// as the first parameter, and ther string variable as second.
//
// string fullName;
// cout << "Type your fullName: ";
// getline (cin, fullName);
// cout << "Your Name is: " << fullName;
//----------------------------------------------------------------------------------
//
//
// Omitting namespace:
//
// #include <iostream>
// #include <string>
//
// int main() {
//  std::string greeting = "Hello! ";
//  std::string name;
//  std::cout << "Enter your name: ";
//  getline(std::cin, name);
//  std::cout << greeting << name <<"\n";
//  return 0;
// }
//----------------------------------------------------------------------------------
//
//
// C++ Math: #include <cmath> enables us to use many functions like
//					 cout << max(5, 10); // -> 10
//					 cout << min(5, 10); // -> 5
//					 cout << sqrt(64);   // -> 8
//					 cout << rount(2.6); // -> 3
//					 there are many function like abs(x), acos(x), asin(x), atan(x), cbrt(x),
//					 ceil(x), cos(x), cosh(x), exp(x) ...
//
//
//
// C++ Booleans: bool data type can take only 2 values true and false
// true is 1, false is 0
//
// bool isCodingFun = true;
// bool isFishTasty = false;
// cout << isCodingFun; // -> 1
// cout << isFishTasty; // -> 0
//
// Boolean Expression: is a C++ expression that returns a boolean value 1(true) or
// 0(false).
//
// int x = 10, y = 9;
// cout << (x > y); // -> 1
//-----------------------------------------------------------------------------------
//
//
// If...Else: if (condition1) {
//							// block of code to be executed if the condition1 is true;
//						} else if (condition2) {
//							// block of code to be executed if the condition2 is true;
//						} else {
//							// block of code to be executed if both the conditions are false;
//						}
//
// Short Hand If...Else (Ternary Operator)
//		variable = (condition) ? expressionTrue : expressionFalse;
//
//		int time = 20;
//		string result = (time < 18) ? "Good Day." : "Good evening.";
//		cout << result; // -> Good Evening.
//
// 
//
// Switch Statements: switch (expression) {
//											case x:
//												// code block
//												break;
//											case y:
//												// code block
//												break;
//											default:
//												// code block
//										}
// ---The switch expression is evaluated once
// ---The value of the expression is compared with the values of each case.
// ---If there is a match, the associated block of code is executed
// ---The break and default keywords are optional.
// ---When C++ reaches a break keyword, it breaks out of the switch block.
// ---The default keyword specifies some code to run if there is no case match.
//-----------------------------------------------------------------------------------
//
//
// Loops: 
//	While Loop:
//		while (condition) {
//			// code block to be executed
//		}
//
//	Do/While Loop:
//		do {
//			// code block to be executed
//		}
//		while (condition);
//	The do/while loop will execute the code block once before checking if the
//	condition is true, then it will repeat the execution as long as the condition is
//	true.
//
//	For Loop:
//		for (statement 1; statement 2; statement 3) {
//			// code block to be executed
//		}
//
// Break statement: break;
//		can also be used to jump out of a loop.
//
//	continue; statement breaks one iteration (in the loop), if a specified condition
//	occurs, and continues with the next iteration in the loop.
//-----------------------------------------------------------------------------------
//
//
//	Arrays:
//		Arrays are used to store multiple value in a single variable.
//
//		string cars[4];
//
//		here cars is an array which will be used to store strings, and it can store 4
//		strings.
//		
//		string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
//
//		int myNum[3] = {10, 20, 37};
//
//		cout << cars[0]; // -> Volvo
//
//		cars[0] = "Opel";
//
//		cout << cars;
//
//		for (int i = 0; i < 4; i++) {
//			cout << i << ": " << cars[i] << "\n";
//		}
//
//		string cars[] = {"Volvo", "BMW", "Ford"};
//		now length of this array is fixed to 3. After sometime if you want extra space
//		for future elements. Then you have to overwrite the existing values.
//		string cars[] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
//
//		if you specify the size, the array will reserve the extra space.
//		string cars[5] = {"Volvo", "BMW", "Ford"};
//		cars[3] = "Mazda";
//		cars[4] = "Tesla";
//
//		It is also possible to declare an array without specifying the elements on
//		declaration and add them later.
//
//		Size of an Array:
//			int myNumbers[5] = {10, 20, 30, 40, 50};
//			cout << sizeof(myNumbers); // -> 20
//			20 is the size of array in bytes. To find the number of elements in the array
//			int getArrayLength = sizeof(myNumbers) / sizeof(int);
//			cout << getArrayLength; // -> 5
//		
//		Multidimensional Arrays: just extension of 1-D array nothing special.
//-----------------------------------------------------------------------------------
//
//
//	Structures:
//		Structures are a way to group several related variables into one place. Each
//		variable in the structure is known as a member of the structure. Unlike array,
//		a structure can contain many different data types (int, string, bool etc.).
//
//		struct {-------------------structure declaration
//			int myNum;---------------member of structure
//			string myString;---------member of structure
//		} myStructure;   ----------name of structure variable
//
//		myStructure.myNum = 1;
//		myStructure.myString = "Hello World!";
//------------------------------------------
//		One Structure in multiple variables:
//			struct {
//				int myNum;
//				string myString;
//			} myStruct1, myStruct2, myStruct3;
//
//			struct {
//				string brand;
//				string model;
//				int year;
//			} myCar1, myCar2;
//			myCar1.brand = "BMW";
//			myCar1.model = "X5";
//			myCar1.year = 1999;
//			myCar2.brand = "Ford";
//			myCar2.model = "Mustang";
//			myCar2.model = 1969;
//-------------------------------
//		Named Structures
//			By giving name to the structure, you can treat as a data type.
//
//			struct myDataType {-----------This structure is named as myDataType
//				int myNum;
//				string myString;
//			};
//
//			myDataType myVar;
//-----------------------------
//		struct car {
//			string brand;
//			string model;
//			int year;
//		};
//
//		int main() {
//			// Create a car structure and store it in myCar1;
//			car myCar1;
//			myCar1.brand = "BMW";
//			myCar1.model = "X5";
//			myCar1.year = 1999;
//
//			// Create another car structure and store it in myCar2;
//			car myCar2;
//			myCar2.brand = "BMW";
//			myCar2.model = "Mustang";
//			myCar2.year = 1969;
//
//			cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
//			cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
//			return 0;
//		}
//-----------------------------------------------------------------------------------
//
//
//	Creating References:
//		A reference variable is a reference to an existing variable, and it is created 
//		with the & operator.
//
//		string food = "Pizza";
//		string &meal = food;
//		cout << food << "\n";
//		cout << meal << "\n";
//
//	Memory Address
//		& can also be used to create a reference variable. But it can also be used to
//		get the memory address of a variable.
