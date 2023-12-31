![c++ structure](https://media.geeksforgeeks.org/wp-content/uploads/20201028224032/BasicStructureOfCProgram.png)

```cpp
// Documentation Section
/* This is a C++ program to find the
	factorial of a number
	The basic requirement for writing this
	program is to have knowledge of loops
	To find the factorial of a number
	iterate over the range from number to 1
*/

// Linking Section
#include <iostream>
using namespace std;

// Definition Section
#define msg "FACTORIAL\n"
typedef int INTEGER;

// Global Declaration Section
INTEGER num = 0, fact = 1, storeFactorial = 0;

// Function Section
INTEGER factorial(INTEGER num)
{
	// Iterate over the loop from
	// num to one
	for (INTEGER i = 1; i <= num; i++) {
		fact *= i;
	}

	// Return the factorial
	return fact;
}

// Main Function
INTEGER main()
{
	// Given number Num
	INTEGER Num = 5;

	// Function Call
	storeFactorial = factorial(Num);
	cout << msg;

	// Print the factorial
	cout << Num << "! = "
		<< storeFactorial << endl;

	return 0;
}

```
