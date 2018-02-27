#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;

int main()
{
	vector<int> data;
	int t, d;
	cin >> t;
	while (t--)
	{
		cin >> d;
		data.push_back(d);
	}
	do
	{
		for(auto& iter : data)
		{
			cout << iter << " ";
		}
		cout << endl;
	} while (prev_permutation(data.begin(), data.end()));
	
}