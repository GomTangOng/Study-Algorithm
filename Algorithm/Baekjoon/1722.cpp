#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;

int f[21]{ 1 };
bool b[21];
int main()
{
	int n, p;
	int digit;
	
	for (int i = 1; i <= 20; ++i)
		f[i] = f[i - 1] * i;
	
	cin >> n;
	cin >> p;
		
	if (p == 1)
	{
		int k;
		vector<int> a(n);
		cin >> k;
		
		for (int i = 0; i < n; ++i)
		{
			for (int j = 1; j <= n; ++j)
			{
				if (b[j] == false)
				{
					if (k > f[n - i - 1])
						k -= f[n - i - 1];
					else
					{
						a[i] = j;
						b[j] = true;
						break;
					}
						
				}
			}
		}
		for (auto& d : a)
			cout << d << " ";
		cout << "\n";
	}
	else
	{
		vector<int> a(n);
		for (int i = 0; i < n; ++i)
			cin >> a[i];
		long long ans = 0;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 1; j < a[i]; ++j)
			{
				if (b[j] == false)
				{
					ans += f[n - i - 1];
				}
			}
			b[a[i]] = true;
		}
		cout << ans + 1 << "\n";
	}
	return 0;
}