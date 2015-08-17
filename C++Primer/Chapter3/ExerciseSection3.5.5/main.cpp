#include <cstddef>
#include <vector>


void prob1()
{
	// Exercise 3.41
	int arr[] = { 1, 2, 3 };
	std::vector<int> vec(std::begin(arr), std::end(arr));
}

void prob2()
{
	std::vector<int> vec = { 1, 2, 3 };
	int arr[3];

	std::size_t index = 0;
	for (auto element : vec)
	{
		arr[index] = element;
		++index;
	}
}

void main()
{
	prob1();
	prob2();
}