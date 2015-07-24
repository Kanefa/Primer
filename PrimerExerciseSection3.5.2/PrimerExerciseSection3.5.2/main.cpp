#include <vector>
#include <iostream>


void prob1()
{
	// Exercise 3.30
	// constexpr size_t array_size = 10;        // Does not compile
	const size_t array_size = 10;
	int ia[array_size];
	for (size_t ix = 1; ix <= array_size; ++ix) // Range is 0-9 not 1-10
		ia[ix] = ix;                            // Index error no ia[10] 
}

void prob2()
{
	// Exercise 3.31
	const size_t array_size = 10;
	int ar[array_size] = { 0 };
	for (size_t index = 0; index < array_size; ++index)
		ar[index] = index;
}

void prob3()
{
	// Exercise 3.32
	const size_t array_size = 10;
	int ar[array_size] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int ar2[array_size] = { 0 };

	for (size_t index = 0; index < array_size; ++index)
		ar2[index] = ar[index];

	std::vector<int> vec{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	std::vector<int> vec2(10, 0);
	vec2 = vec;
	std::vector<int> vec3 = vec;
}

void prob4()
{
	// Exercise 3.33
	// The array will have undefined values
	unsigned scores[11] /*= {}*/;
	unsigned grade;
	while (std::cin >> grade)
	{
		if (grade <= 100)
			++scores[grade / 10];
	}
}

void main()
{
//	prob1();
//	prob2();
//	prob3();
	prob4();
}

