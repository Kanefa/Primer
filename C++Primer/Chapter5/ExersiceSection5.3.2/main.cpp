#include <algorithm>
#include <iostream>
#include <vector>

void exercise5_9()
{
	std::cout << "Enter text and EOF to terminate, the frequency of each vowel will be displayed.\n";
	int aCount = 0, eCount = 0, iCount = 0, oCount = 0, uCount = 0;
	char c;
	while (std::cin >> c)
	{
		if ('a' == c)
			++aCount;
		if ('e' == c)
			++eCount;
		if ('i' == c)
			++iCount;
		if ('o' == c)
			++oCount;
		if ('u' == c)
			++uCount;
	}

	std::cout << "Frequency of vowel(s) are" << " A:" << aCount << " E:" << eCount << " I:" << iCount << " O:"
		<< oCount << " U:" << uCount << ".\n";
}

void exercise5_10()
{
	std::cout << "\nEnter text and EOF to terminate, the frequency of each vowel will be displayed.\n";
	int aCount = 0, eCount = 0, iCount = 0, oCount = 0, uCount = 0;
	char c;
	std::cin.clear();
	while (std::cin >> c)
	{
		switch (c)
		{
			case 'a':
			case 'A':
				++aCount;
				break;
			case 'e':
			case 'E':
				++eCount;
				break;
			case 'i':
			case 'I':
				++iCount;
				break;
			case 'o':
			case 'O':
				++oCount;
				break;
			case 'u':
			case 'U':
				++uCount;
				break;
		}
	}

	std::cout << "Frequency of vowel(s) are" << " A:" << aCount << " E:" << eCount << " I:" << iCount << " O:"
		<< oCount << " U:" << uCount << ".\n";
}

void exercise5_11()
{
	std::cout << "\nEnter text and EOF to terminate, the frequency of each vowel, space(s), tab(s), and newline(s) will be displayed.\n";
	int aCount = 0, eCount = 0, iCount = 0, oCount = 0, uCount = 0, spaceCount = 0, tabCount = 0, newlineCount = 0;
	char c;
	std::cin.clear();
	while (std::cin >> std::noskipws >> c)
	{
		switch (c)
		{
		case 'a':
		case 'A':
			++aCount;
			break;
		case 'e':
		case 'E':
			++eCount;
			break;
		case 'i':
		case 'I':
			++iCount;
			break;
		case 'o':
		case 'O':
			++oCount;
			break;
		case 'u':
		case 'U':
			++uCount;
			break;
		case ' ':
			++spaceCount;
			break;
		case '\t':
			++tabCount;
			break;
		case '\n':
			++newlineCount;
			break;
		}
	}

	std::cout << "Frequency of each vowel, space(s), tab(s), and newline(s) are" << " A:" << aCount << " E:" << eCount << " I:" << iCount
		<< " O:" << oCount << " U:" << uCount << " spaces:" << spaceCount << " tabCount:" << tabCount << " newline:" << newlineCount
		<< ".\n";
}

void exercise5_12()
{
	std::cout << "\nEnter text and EOF to terminate, the frequency of each vowel, space(s), tab(s), newline(s) and the two letter sequences"
		"ff, fl, and fi will be displayed.\n";
	int aCount = 0, eCount = 0, iCount = 0, oCount = 0, uCount = 0, spaceCount = 0, tabCount = 0, newlineCount = 0, ffCount = 0, flCount = 0,
		fiCount = 0;
	char c;
	std::cin.clear();
	while (std::cin >> std::noskipws >> c)
	{
		switch (c)
		{
		case 'a':
		case 'A':
			++aCount;
			break;
		case 'e':
		case 'E':
			++eCount;
			break;
		case 'i':
		case 'I':
			++iCount;
			break;
		case 'o':
		case 'O':
			++oCount;
			break;
		case 'u':
		case 'U':
			++uCount;
			break;
		case ' ':
			++spaceCount;
			break;
		case '\t':
			++tabCount;
			break;
		case '\n':
			++newlineCount;
			break;
		case 'f':
			if (std::cin.peek() == 'f')
				++ffCount;
			else if (std::cin.peek() == 'l')
				++flCount;
			else if (std::cin.peek() == 'i')
				++fiCount;
		}
	}

	std::cout << "Frequency of each vowel, space(s), tab(s), and newline(s) are" << " A:" << aCount << " E:" << eCount << " I:" << iCount
		<< " O:" << oCount << " U:" << uCount << " spaces:" << spaceCount << " tabCount:" << tabCount << " newline:" << newlineCount
		<< " ff:" << ffCount << " fl:" << flCount << " fi:" << fiCount << ".\n";
}

char next_text()
{
	return 'a';
}

unsigned some_value()
{
	return 7;
}

unsigned get_value()
{
	return 0;
}

int get_num()
{
	return 7;
}

unsigned get_bufCnt()
{
	return 1;
}

void exercise5_13()
{
	// a.
	// There are no breaks, so for any case that is true, the cases below it will also be true.
	unsigned aCnt = 0, eCnt = 0, ioutCnt = 0;
	char ch = next_text();
	switch (ch)
	{
		case 'a': 
			aCnt++;
			break;
		case 'e': 
			eCnt++;
			break;
		default: 
			ioutCnt++;
			break;
	}

	// b.
	// The initialization of ix can be skipped. Initialize it outside the switch.
	std::vector<unsigned int> ivec(3, 0);
	unsigned index = some_value();
	int ix = get_value();
	switch (index)
	{
		case 1:
			ivec[ix] = index;
			break;
		default:
			ix = ivec.size() - 1;
			ivec[ix] = index;
	}

	// c.
	// The case label can not be comprised of a sequence of values. Rewrite so each case label is comprised of one value.
	unsigned evenCnt = 0, oddCnt = 0;
	int digit = get_num() % 10;
	switch (digit)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 9:
			oddCnt++;
			break;
		case 2:
		case 4:
		case 6:
		case 8:
		case 10:
			evenCnt++;
			break;
	}

	// d.
	// The case labels must be integral constant expressions. Make ival, jval, and kval const.
	const unsigned ival = 512, jval = 1024, kval = 4096;
	unsigned bufsize;
	unsigned swt = get_bufCnt();
	switch (swt)
	{
		case ival:
			bufsize = ival * sizeof(int);
			break;
		case jval:
			bufsize = jval * sizeof(int);
			break;
		case kval:
			bufsize = kval * sizeof(int);
			break;
	}
}

int main()
{
	exercise5_9();
	exercise5_10();
	exercise5_11();
	exercise5_12();
	exercise5_13();

	return 0;
}
