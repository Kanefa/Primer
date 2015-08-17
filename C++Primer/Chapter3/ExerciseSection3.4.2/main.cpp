#include <iostream>
#include <vector>


void prob1()
{
	// Exercise 3.24
	std::vector<int> ivec;
	int i;
	while (std::cin >> i)
		ivec.push_back(i);

/*
	if (!ivec.empty())
	{
		std::vector<int>::const_iterator it = begin(ivec);

		if (ivec.size() == 1)
			std::cout << *it;
		else
		{
			for (; it + 1 != end(ivec); ++it)
				std::cout << *it + *(it + 1) << std::endl;
		}
	}
*/

	if (!ivec.empty())
	{
		std::vector<int>::const_iterator begIt = begin(ivec);
		std::vector<int>::const_iterator endIt = end(ivec) - 1;

		while (begIt < endIt && begIt != endIt) // Even & odd case
		{
			std::cout << *begIt + *endIt << std::endl;
			++begIt;
			--endIt;
		}

		if (begIt == endIt)
			std::cout << *begIt;
	}
}

void prob2()
{
	// Exercise 3.25
	std::vector<unsigned int> scores(11, 0);
	std::vector<unsigned int>::iterator current;
	std::vector<unsigned int>::iterator beginIt = begin(scores);

	unsigned int grade;
	while (std::cin >> grade)
	{
		if (grade <= 100)
		{
			current = beginIt + (grade / 10);
			*current += 1;
		}
	}
}

void prob3()
{
	// Exercise 3.26
	std::vector<int> test{0, 1, 3};
	std::vector<int>::const_iterator begIt = begin(test);
	std::vector<int>::const_iterator endIt = end(test);

	std::vector<int>::const_iterator mid0 = begIt + (endIt - begIt) / 2;	// returns a iterator
	int mid1 = (endIt - begIt) / 2;											// returns and int

	std::cout << "Dereferenced Iterator: " << *mid0 << " Integer: " << mid1 << std::endl;
}

void main()
{
//	prob1();
//	prob2();
	prob3();
}