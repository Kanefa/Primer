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

		for (auto it = ivec.cbegin(); it != ivec.cend(); ++it)
		{
			cout << " " << *it;
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

		for (auto it = svec.cbegin(); it != svec.cend(); ++it)
		{
			cout << " " << *it;
		}
		cout << "\n" << endl;
	}
}

void main()
{
	// Exercise 3.21
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
	// Exercise 3.22
/*
	std::vector<string> text =
		{ "Hello, my name is Max."
		, "I am a robot dog from the future."
		, ""
		, "We use paragraphs now." };

	for (auto it = text.begin(); it != text.end() && !it->empty(); ++it)
	{
		for (auto itstr = it->begin(); itstr != it->end(); ++itstr)
		{
			*itstr = toupper(*itstr);
		}
	}

	for (auto str : text)
	{
		if (str.empty())
			cout << "\n";
		else
			cout << str << " ";
	}
*/
	// Exercise 3.23

	vector<int> ivec{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	for (auto it = ivec.begin(); it != ivec.end(); ++it)
	{
		*it = (*it) * 2;
	}

	for (auto i : ivec)
		cout << i << " ";
}