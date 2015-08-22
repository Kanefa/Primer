#include <iostream>
#include <vector>
void exercise5_15()
{
	// a.
	// Since ix is declared in the for loop's header it is out of scope when 
	// used in the if's condition. Move ix's declaration out of the for loop.
	int sz = 10;
	int ix = 0;
	for (ix = 0; ix != sz; ++ix)
		;
	if (ix != sz)
		;

	// b. 
	// The for loops control variable is declared outside the for loop's header
	// and it is not initialized. If there isn't a good reason to do it outside
	// the header then do this inside the header.
	for (int ix = 0; ix != sz; ++ix)
	{}

	// c.
	// Since we are incrementing both ix and sz at the same frequency,
	// condition will never fail.
	// for (int ix = 0; ix != sz; ++ix, ++sz)
	// {}
}

void exercise5_16()
{
	// If I could only use one loop it would be the for loop. The for loop's
	// header organizes all the pertinent information in one place. Also,
	// the control variable will not pollute the external scope.

	// Idiomatic use of a while loop
//	char c;
//	while (std::cin >> c)
//		;

//	for (char c; std::cin >> c;)
//		;

	// Idiomatic use of a for loop
	int x = 0;
	int arr[]{0, 1, 2};
	for (auto begin = std::begin(arr); begin != std::end(arr); ++begin)
		;

	auto begin = std::begin(arr);
	while (begin != std::end(arr))
		++begin;
}

bool exercise5_17()
{
	std::vector<int> vec1{0, 1, 1, 2};
	std::vector<int> vec2{0, 1, 1, 2, 3, 5, 8};

	std::vector<int> small;
	std::vector<int> big;

	if (vec1.size() <= vec2.size())
	{
		small = vec1;
		big = vec2;
	}
	else
	{
		small = vec2;
		big = vec1;
	}

	auto s = std::begin(small), b = std::begin(big);
	for (; s != std::end(small); ++s, ++b)
	{
		if (*s != *b)
			break;
	}

	bool isPrefix = false;
	if (s == std::end(small))
		isPrefix = true;

	return isPrefix;
}

int main()
{
	exercise5_15();
	exercise5_16();
	exercise5_17();

	return 0;
}
