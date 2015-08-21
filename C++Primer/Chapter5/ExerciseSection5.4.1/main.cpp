#include <iostream>
#include <string>

void exercise5_14()
{
	struct Occurrence
	{
		std::string str;
		int count{0};
	};

	Occurrence newOcc;
	Occurrence maxOcc;
	std::string prevStr;
	std::string curStr;

	while (std::cin >> curStr)
	{
		if (curStr != prevStr)
		{
			// We have a new occurrence. This means we have counted all the
			// occurrences of the previous word. See if it is the new max.
			// We use greater than or equals to give preference to newer words.
			if (newOcc.count >= maxOcc.count)
			{
				maxOcc.str = newOcc.str;
				maxOcc.count = newOcc.count;
			}

			// Record new occurrence
			newOcc.str = curStr;
			newOcc.count = 1;
		}
		else
			++newOcc.count;

		prevStr = curStr;
	}

	if (maxOcc.count == 1)
		std::cout << "No word has a duplicate.";
	else
		std::cout << "The word " << maxOcc.str << " has " << maxOcc.count << " occurrences.\n";
}

int main()
{
	exercise5_14();

	return 0;
}
