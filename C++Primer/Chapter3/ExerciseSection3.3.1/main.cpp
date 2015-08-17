#include <string>
#include <vector>

using namespace std;

void main()
{
	// Exercise 3.12
	// a. Legal, creates a vector of vectors with elements of type int.
	// vector<vector<int>> ivec;
	// b. Illegal, svec and ivec have mismatching types.
	// vector<string> svec = ivec;
	// c. Legal, creates a vector with 10 elements, each initialized to "null""
	// vector<string> svec(10, "null");

	// Exercise 3.13
	// a. 0, would be 0
	vector<int> v1;
	// b. 10, 0
	 vector<int> v2(10);
	// c. 10, 42
	 vector<int> v3(10, 42);
	// d. 1, 10
	 vector<int> v4{ 10 };
	// e. 2, 10 & 42
	 vector<int> v5{10, 42};
	// f. 10, ""
	 vector<string> v6{ 10 };
	// g. 10, "hi"
	 vector<string> v7{ 10, "hi" };

}