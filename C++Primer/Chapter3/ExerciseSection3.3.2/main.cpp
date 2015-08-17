#include <iostream>
#include <string>
#include <vector>

using namespace std;

void main()
{
	vector<int> ivec;
	int x;
	while (cin >> x)
	{
		ivec.push_back(x);
	}

	cin.clear();

	vector<string> svec;
	string str;
	while (cin >> str)
	{
		svec.push_back(str);
	}
}