#include <iostream>
#include "MyClass.h"

int main() {
	MyClass myClass;
	myClass.DontEnterFive();
	myClass.ThatsEnough();
	myClass.DontEnterIterationNumber();
	system("pause");
	return 0;
}

// 5. What is the difference between a Switch statement and an If - Else If - Else code block?
//	- Why is a switch preferable?
//
// A switch statement can compare one value against many other values while allowing multiple results to evaluate to the same logic (fall through)
// The same conditions can be tested in an if statement but with less readability

// 6. Solve the image:
// r + c = 10
// r + d = 20
// c + d = 24
// 2r = 30 - (c + d)
// r = 3
// c = 7
// d = 17
// r + c + d = 27