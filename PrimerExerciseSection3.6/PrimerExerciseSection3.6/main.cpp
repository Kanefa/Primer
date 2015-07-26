#include <cstddef>
#include <iostream>

void exercise3_43()
{
	int ia[3][4] = {
		{ 0, 1, 2, 3 },
		{ 4, 5, 6, 7 },
		{ 8, 9, 10, 11 }
	};

	std::cout << "For loop using subscripts\n";
	const size_t lengthOuter = sizeof(ia) / sizeof(*ia);
	int const (*const innerArr)[4] = ia;
	const size_t lengthInner = sizeof(*innerArr) / sizeof(**innerArr);
	for (size_t x = 0; x < lengthOuter; ++x)
	{
		for (size_t y = 0; y < lengthInner; ++y)
			std::cout << ia[x][y] << "\n";
	}

	std::cout << "\nFor loop using pointers\n";
	for (int (*arrOuter)[4] = ia; arrOuter != ia + 3; ++arrOuter)
	{
		for (int *arrInner = *arrOuter; arrInner != *arrOuter + 4; ++arrInner)
			std::cout << *arrInner << "\n";
	}

	std::cout << "\nFor loop using pointers, and begin and end functions\n";
	for (int(*arrOuter)[4] = std::begin(ia); arrOuter != std::end(ia); ++arrOuter)
	{
		for (int(*arrInner) = std::begin(*arrOuter); arrInner != std::end(*arrOuter); ++arrInner)
			std::cout << *arrInner << "\n";
	}

	std::cout << "\nFor each\n";
	for (int (&arrOuter)[4] : ia) // Reference is necessary even though we are not writing to arrOuter 
	{	                          // since without it the array would be converted to a pointer.
		for (int arrInner : arrOuter)
			std::cout << arrInner << "\n";
	}
}

void exercise3_44()
{
	int ia[3][4] = {
		{ 0, 1, 2, 3 },
		{ 4, 5, 6, 7 },
		{ 8, 9, 10, 11 }
	};

	std::cout << "\nFor loop using subscripts and a type alias for the loop control variable\n";
	using ArraySize = size_t;
	const size_t lengthOuter = sizeof(ia) / sizeof(*ia);
	int const (*const innerArr)[4] = ia;
	const size_t lengthInner = sizeof(*innerArr) / sizeof(**innerArr);
	for (ArraySize x = 0; x < lengthOuter; ++x)
	{
		for (ArraySize y = 0; y < lengthInner; ++y)
			std::cout << ia[x][y] << "\n";
	}

	std::cout << "\nFor loop using pointers, begin and end functions, and a type alias for the\n"
					"loop control variable\n";
	using IntArray4 = int[4];
	for (IntArray4 *arrOuter = std::begin(ia); arrOuter != std::end(ia); ++arrOuter)
	{
		for (int(*arrInner) = std::begin(*arrOuter); arrInner != std::end(*arrOuter); ++arrInner)
			std::cout << *arrInner << "\n";
	}

	std::cout << "\nFor each with a type alias for the loop control variable\n";
	using IntArray4 = int[4];
	for (IntArray4 &arrOuter : ia)
	{
		for (int arrInner : arrOuter)
			std::cout << arrInner << "\n";
	}
}

void exercise3_45()
{
	int ia[3][4] = {
		{ 0, 1, 2, 3 },
		{ 4, 5, 6, 7 },
		{ 8, 9, 10, 11 }
	};

	std::cout << "\nFor loop using subscripts and auto\n";
	const size_t lengthOuter = sizeof(ia) / sizeof(*ia);
	int const (*const innerArr)[4] = ia;
	const size_t lengthInner = sizeof(*innerArr) / sizeof(**innerArr);
	for (auto x = 0; x < lengthOuter; ++x)
	{
		for (auto y = 0; y < lengthInner; ++y)
			std::cout << ia[x][y] << "\n";
	}

	std::cout << "\nFor loop using pointers, and begin and end functions and auto\n";
	for (auto arrOuter = std::begin(ia); arrOuter != std::end(ia); ++arrOuter)
	{
		for (auto arrInner = std::begin(*arrOuter); arrInner != std::end(*arrOuter); ++arrInner)
			std::cout << *arrInner << "\n";
	}

	std::cout << "\nFor each\n";
	for (auto &arrOuter : ia)
	{
		for (auto arrInner : arrOuter)
			std::cout << arrInner << "\n";
	}
}

void main()
{
	exercise3_43();
	exercise3_44();
	exercise3_45();
}