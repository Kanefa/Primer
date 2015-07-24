#include <cstddef>
#include <iostream>
#include <iterator>
#include <vector>


void prob1()
{
	// Exercise 3.5.3
	// Legal, the following code finds the difference between the two pointers and then adds this difference to p1 moving it forwards
	// or backwards depending on the sign. It is the programmers responsibility to guarantee the pointer arithmetic results in a value
	// that is in bounds. Note: there is a special type for the difference of pointers called std::ptrdiff_t and it is a signed type.
	int arr[] = { 0, 1, 2 , 4};
	int *p1 = std::begin(arr) + 1; // p1 and p2 are the same type
	int *p2 = std::begin(arr) + 2;
	int offset = p2 - p1;
	p1 += p2 - p1; // position 2 - position 1 = position 2
	std::cout << "The value of *p1 is: " << *p1 << "." << std::endl;
}

void prob2()
{
	// Exercise 3.35
	int arr[] = { 1, 1, 1 };
	auto index = std::begin(arr);
	auto last = std::end(arr);

	for (; index != last; ++index)
		*index = 0;
}

void prob3a()
{
	// Exercise 3.36
	bool ret = true;
	int arr0[] = { 1, 2, 3 };
	int arr1[] = { 1, 2, 2 };

	if (sizeof(arr0) != sizeof(arr1))
		ret = false;
	else
	{
		// We know their sizes are the same
		auto itArr0 = std::begin(arr0);
		auto lastArr0 = std::end(arr0);
		auto itArr1 = std::begin(arr1);

		while (itArr0 != lastArr0)
		{
			if (*itArr0 != *itArr1)
				ret = false;
			
			++itArr0;
			++itArr1;
		}
	}

	if (ret)
		std::cout << "arr0 and arr1 are equal." << std::endl;
	else
		std::cout << "arr0 and arr1 are not equal." << std::endl;
}

void prob3b()
{
	std::vector<int> vec0 = { 1, 2, 3 };
	std::vector<int> vec1 = { 1, 2, 2 };

	if (vec0 == vec1)
		std::cout << "vec0 and vec1 are equal." << std::endl;
	else
		std::cout << "vec0 and vec1 are not equal." << std::endl;
}

void main()
{
	prob1();
	prob2();
	prob3a();
	prob3b();
}