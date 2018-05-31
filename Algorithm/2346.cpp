#include <cstdio>
#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
	int test;
	int num;
	list <pair<int, int >> list;

	cin >> test;
	for(int i =0; i<test; ++i)
	{
		cin >> num;
		list.push_back(make_pair(num, i + 1));
	}
	auto iter = list.begin();
	for (int i = 0; i < test - 1; ++i)
	{
		cout << (*iter).second << " ";
		int count = (*iter).first;
		if ((*iter).first < 0)
		{
			auto temp = iter;
			count = -count;

			
			if (temp == list.begin()) temp = list.end();
			
			temp--;

			list.erase(iter);
			iter = temp;

			for (int j = 1; j < count; ++j)
			{
				if (iter == list.begin())
					iter = list.end();
				--iter;
			}
		}
		else
		{
			auto temp = iter;

			temp++;

			if (temp == list.end()) temp = list.begin();
			list.erase(iter);
			iter = temp;

			for (int j = 1; j < count; ++j)
			{
				++iter;
				if (iter == list.end())
					iter = list.begin();
			}
		}
	}
	cout << list.front().second << "\n";
	
	return 0;
}