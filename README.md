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

### Pointers

## What is a pointer variable?

A pointer variable is a variable that stores the memory address of another variable.
It acts as a reference or "pointer" to the location where data is stored in memory.
It's declared using the asterisk (*) operator before the variable name (e.g., int *ptr;).
Applications of pointer variables:

## Dynamic memory allocation: Allocate memory at runtime for data structures like arrays, linked lists, trees.
Passing arguments by reference: Modify function arguments directly, enabling functions to change caller's variables.
Accessing array elements: Efficiently work with arrays, as array names are implicitly pointers to their first elements.
Implementing data structures: Build complex structures like linked lists, trees, and graphs, which heavily rely on pointers.
Handling strings: Manipulate strings, as C-style strings are essentially character arrays accessed using pointers.
Advantages:

## Efficient memory management: Dynamically allocate and deallocate memory as needed, avoiding pre-allocation of fixed-size arrays.
Direct memory access: Interact with memory directly for low-level operations and hardware interaction.
Flexibility: Create complex data structures and algorithms that are not possible with regular variables alone.
Disadvantages:

## Complexity: Can be challenging to understand and use correctly, increasing the risk of errors like segmentation faults.
Security vulnerabilities: Improper pointer usage can lead to memory corruption, buffer overflows, and security exploits.
Operations on pointer variables:

## Assignment: Assign the address of another variable to a pointer (e.g., ptr = &x;).
Dereferencing: Access the value stored at the address pointed to by the pointer (e.g., *ptr = 10;).
Arithmetic: Perform pointer arithmetic (e.g., ptr++, ptr += 2) to move through memory locations.
Comparison: Compare pointers for equality or inequality (e.g., ptr1 == ptr2).
Data types that can be expressed as pointers:

## Basic data types: int, float, char, double, etc.
Derived data types: Arrays, structures, unions, classes (in C++).
Function pointers: Store addresses of functions for dynamic function calls.
Key points:

Use pointers with care, as incorrect usage can lead to serious errors.
Understand memory management concepts like allocation and deallocation.
Utilize debugging tools to track pointer-related issues.
Consider safer alternatives like smart pointers in C++ when appropriate.
