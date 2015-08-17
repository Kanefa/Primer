#include <vector>
#include <string>

void exercise4_20()
{
	std::vector<std::string> v{"hello", "world"};
	auto iter = v.begin();
	
	// a. Legal, iter is incrememnted by the postfix incrememnt operator and then it is dereferenced;
	*iter++;

	// b. Illegal, iter is dereferenced and then the postfix increment operator tries to increment the string.
	// However, std::string does not define a postfix increment operator.
	// (*iter)++;

	// c. Illegal, iter does not have a empty member function.
	// *iter.empty();

	// d. Legal, iter is dereferenced and then the empty member function is fetched.
	iter->empty();

	// e. Illegal, the iter is deferenced and then the prefix increment operator tries to increment the string.
	// However, std::string does not define a prefix increment operator.
	// ++*iter;

	// e. Legal, the postfix increment operator increments iter and then iter is dereferenced and the empty member function is fetched.  
	iter++->empty();
}

int main()
{
	exercise4_20();
	return 0;
}
