#include <iostream>
#include <vector>

void exercise4_31()
{
	// The prefix increment/decrement more clearly expresses our intent. Also, additional work can
	// be created by postfix storing the original value, so unless we need this behavior we should
	// use the prefix increment/decrement operator. In this example, I see no other compelling reason
	// why postfix would not work or changes that need to be made in order for it to work.
	std::vector<int> ivec(10, 0);
	std::vector<int>::size_type cnt = ivec.size();
	for (std::vector<int>::size_type ix = 0; ix != ivec.size(); ++ix, --cnt)
	{
		ivec[ix] = cnt;
		std::cout << ivec[ix] << " ";
	}
}

void exercide4_32()
{
	// A pointer and index are initialized and have a condition to index the next element of the array
	// each time through the loop.
	constexpr int size = 5;
	int ia[size] = {1, 2, 3, 4, 5};
	// ponter is initialize to 1st element of array and index is set to 0
	// pointer and index are not equal to one past the end of the array
	// pointer and index are incremented
	for (int *ptr = ia, ix = 0; ix != size && ptr != ia + size; ++ix, ++ptr)
	{}
}

void exercide4_33()
{
	bool someValue = true;
	int x = 0;
	int y = 0;

	// If someValue is true then ++x and ++y will be evaluated as expr1.
	// However, only --x will be seen as expr2. --y will be evaluated after
	// the condition, because of the low precedent of the comma operator.
	// (true ? ((++x), (++y)) : (--x)), (--y);
	someValue ? ++x, ++y : --x, --y;
	std::cout << "\n\nx: " << x << " y: " << y << "\n";
}

int main()
{
	exercise4_31();
	exercide4_32();
	exercide4_33();

	return 0;
}
