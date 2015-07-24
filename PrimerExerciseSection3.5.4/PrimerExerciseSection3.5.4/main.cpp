#include <iostream>
#include <string>


void prob1()
{
	// Exercise 3.37
	// It is undefined since it is missing a null terminator. However, it will most likely continue to print characters until it finds a 
	// null terminator.
	const char ca[] = { 'H', 'e', 'l', 'l', 'o'};
	const char *cp = ca;
	while (*cp)
	{
		std::cout << *cp << std::endl;
		++cp;
	}
}

void prob2()
{
	// Exercise 3.38
	int val0 = 1;
	int val1 = 2;

	int *p0 = &val0;
	int *p1 = &val1;

	// Illegal
	// int *pSum = p0 + p1;

	// Legal
	int *pSum = p0 + 1;

	// Adding two pointers would result in a new pointer at the newly specified location memory. However, I cannot think of any
	// significance of this new location. It's not useful.
}

void prob3a()
{
	// Exercise 3.39
	std::string str0 = "Hello";
	std::string str1 = "World";

	if (str0 == str0)
		std::cout << "The strings are equal." << std::endl;
	else
		std::cout << "The strings are not equal." << std::endl;
}

void prob3b()
{
	// Exercise 3.39
	const char arr0[] = { 'H', 'e', 'l', 'l', 'o', '\0' };
	const char arr1[] = { 'W', 'o', 'r', 'l', 'd', '\0' };

	if (strcmp(arr0, arr0) == 0)
		std::cout << "The arrays are equal." << std::endl;
	else
		std::cout << "The array are not equal." << std::endl;
}

void prob4()
{
	// Exercise 3.40
	const char cstr0[] = "Hello";
	const char cstr1[] = "World";

	const auto size = sizeof(cstr0) + sizeof(cstr1);
	char cstr2[size];
	strcpy_s(cstr2, cstr0);
	strcat_s(cstr2, cstr1);
}

void main()
{
	prob1();
	prob2();
	prob3a();
	prob3b();
	prob4();
}