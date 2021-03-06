#include <iostream>
using namespace std;

//Write a function that normally takes one argument, the address of a string, and prints that string once.
//However, if a second, type int, argument is provided and is nonzero,
//the function should print the string a number of times equal to the number of times
//that function has been called at that point.
//(Note that the number of times the string is printed is not equal to the value of the second argument;
//it is equal to the number of times the function has been called.)
//Yes, this is a silly function, but it makes you use some of the techniques discussed in this chapter.
//Use the function in a simple program that demonstrates how the function works.

void print(const char* c, int a = 0)
{
	if (a != 0)
	{
		cout << c << endl;
	}
}

int main1()
{
	const char* p = "Hello World!";
	int x = 6;
	print(p, x);
	
	
	cout << "\nHello..." << endl;
	return 0;
}