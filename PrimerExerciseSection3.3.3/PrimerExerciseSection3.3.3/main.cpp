#include <cctype>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void printIntVec(const vector<int> ivec)
{
	vector<int>::size_type size = ivec.size();
	cout << "The vector's size is " << size << "." << endl;
	
	if (size == 0)
	{
		cout << "The vector has no elements.\n" << endl;
	}
	else
	{
		cout << "The contents of the vector are";

		for (auto element : ivec)
		{
			cout << " " << element;
		}
		cout << "\n" << endl;
	}
}

void printStrVec(const vector<string> svec)
{
	vector<string>::size_type size = svec.size();
	cout << "The vector's size is " << size << "." << endl;

	if (size == 0)
	{
		cout << "The vector has no elements.\n" << endl;
	}
	else
	{
		cout << "The contents of the vector are";

		for (const auto &element : svec)
		{
			cout << " " << element;
		}
		cout << "\n" << endl;
	}
}

void main()
{
	// Exercise 3.16
/*
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{ 10 };
	vector<int> v5{ 10, 42 };
	vector<string> v6{ 10 };
	vector<string> v7{ 10, "hi" };

	printIntVec(v1);
	printIntVec(v2);
	printIntVec(v3);
	printIntVec(v4);
	printIntVec(v5);
	printStrVec(v6);
	printStrVec(v7);
*/
	// Exercise 3.17
/*
	vector<string> sVec;
	string word;
	while (cin >> word)
		sVec.push_back(word);

	vector<string>::size_type index = 0;
	for (auto &wordElement : sVec)
	{
		for (auto &charElement : wordElement)
		{
			charElement = toupper(charElement);
		}

		++index;
		if (index > 8)
		{
			cout << "\n";
			index = 0;
		}

		cout << wordElement << " ";
	}
*/
	// Exercise 3.18
/*
	// vector<int> ivec; // It's illegal, hthis will subscript an element that does not exist. Buffer overflow.
	vector<int> ivec(1); // Correction.
	ivec[0] = 42;
*/
	// Exercise 3.19
/*
	vector<int> v0(10, 42); // prefered method
	vector<int> v1{ 42, 42, 42, 42, 42, 42, 42, 42, 42, 42 };
	vector<int> v2;
	for (vector<int>::size_type i = 0; i < 10; ++i)
		v2.push_back(i);
*/
	// Exercise 3.20
	vector<int> iVec;
	
	int i = 0;
	while (cin >> i)
		iVec.push_back(i);

/*
	// Print the sum of each adjacent pair
	for (vector<int>::size_type i = 0; i < iVec.size(); ++i)
	{
		if (i != 0)
			cout << iVec[i - 1] + iVec[i] << endl;
	}
*/	
	const bool odd = iVec.size() / 2 != iVec.size() / 2.0f;
	// Print he sum of the first and last, and so on
	for (vector<int>::size_type i = 0; i < iVec.size() / 2; ++i)
	{
		cout << iVec[i] + iVec[iVec.size() - 1 - i] << endl;
		if (odd && i == iVec.size() / 2 - 1) // Handle the middle most number without a partner
			cout << iVec[i + 1];
	}

}
