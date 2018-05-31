#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std; 

int Factoriol(int n)
{
	int res = 1;
	for (int i = 1; i <= n; ++i)
		res *= i;
	return res;
}

int GetCount(vector<int>& n, int size)
{
	int digit;
	int count = 0;
	vector<int> k;
	for (int i = 0; i < size; ++i)
		k.push_back(i + 1);
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < n[i]; ++j)
		{
			if (k[j] >= n[i]) break;
			count++;
		}
	}
}

struct NData
{
	int n1, n2;
};

vector<int> k_data;
vector<NData> n_data;
int main()
{
	int k, n;
	int d1, d2;
	scanf("%d %d ", &k, &n);
	for (int i = 0; i < k; ++i)
	{
		scanf(" %d", &d1);
		k_data.push_back(d1);
	}
	for (int i = 0; i < n; ++i)
	{
		NData d;
		scanf(" %d %d", &d.n1, &d.n2);
		n_data.push_back(d);
	}
	int count = 0;

	for (auto& d : n_data)
	{
		vector<int> temp;
		temp = k_data;

		std::swap(temp[d.n1 - 1], temp[d.n2 - 1]);
		cout << GetCount(temp, k) << "\n";
	}
}