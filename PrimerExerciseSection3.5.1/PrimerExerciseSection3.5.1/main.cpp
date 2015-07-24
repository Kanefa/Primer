#include <string>


int txt_size()
{
	return 1;
}

void prob1()
{
	// Exercise 3.27
/*
	unsigned buf_size = 1024;

	int ia[buf_size];            // Illegal buf_size must be a constexpr
	int ib[4 * 7 - 14];            // Legal
	int ic[txt_size()];          // Illegal txt_size() must return a constexpr
	char st[11] = "fundamental"; // Illegal no space for the null
*/
}

void prob2()
{
	// Exercise 3.28
	std::string sa2[10]; // If local - ""
	int ia2[10];		 // If local - undefined
}
 std::string sa[10];     // Global - ""
 int ia[10];		     // Global - 0

// Exercise 3.29
// Drawbacks of using array instead of std::vector
// 1 - size must be known at compile time
// 2 - no out of bounds checking (std::vector::at())
void main()
{
//	prob1();
//	prob2();
}