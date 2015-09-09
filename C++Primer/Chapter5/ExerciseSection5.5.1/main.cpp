#include <iostream>
#include <string>

int main()
{
	std::string cur, prev;
	while (std::cin >> cur)
	{
		if (prev == cur)
			break;
		else
			prev = cur;
	}

	if (std::cin.eof())
		std::cout << "No word was repeated.\n";
	else
		std::cout << cur << " was repeated in succession.\n";

	return 0;
}
