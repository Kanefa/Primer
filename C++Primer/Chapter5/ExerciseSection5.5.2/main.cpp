#include <cctype>
#include <iostream>
#include <string>

void exercise5_21()
{
	std::string cur, prev;
	while (std::cin >> cur)
	{
		if (!prev.empty() && std::isupper(prev.front())
			&& !cur.empty() && std::isupper(cur.front()))
		{
			if (prev == cur)
				break;
		}
		
		prev = cur;
		continue;
	}

	if (std::cin.eof())
		std::cout << "No word was repeated.\n";
	else
		std::cout << cur << " starts with an uppercase letter and was repeated in succession.\n";
}

int main()
{
	exercise5_21();

	return 0;
}
