#include <string>

bool find(std::string)
{
	return true;
}

void exercise5_4()
{
	// a.
	// Illegal declaration
	// while (std::string::iterator iter != s.end()) {}

	// Corrected
	std::string s{"hello"};
	std::string::iterator iter = s.begin();
	while (iter != s.end()) {}

	// b.
	// The status variable's scope is only within the while loop,
	// so it is out of scope when it is used in the if statement.
	// while (bool status = find(word)) {}
	// if (!status) {}

	// Corrected
	std::string word{"world"};
	bool status = false;
	while (status = find(word)) {}
	if (status) {}
}

int main()
{
	exercise5_4();

	return 0;
}
