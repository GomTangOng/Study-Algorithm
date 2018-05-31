// º°Âï±â - 16
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int n;

	scanf("%d", &n);
	
	for (int i = 0; i < n; ++i)
	{
		int blank_cnt1 = n - i - 1;
		int star_cnt = i;
		if (i == 0)
		{
			for (int j = 0; j < blank_cnt1; ++j)
				cout << " ";
			cout << "*";
		}
		else if (i != (n - 1))
		{
			for (int j = n - 1 - i; j > 0; --j)
				cout << " ";
			cout << "*";
			for (int j = 0; j < (2 *i - 1); ++j)
				cout << " ";
			cout << "*";
		}
		else
		{
			for (int j = 0; j < 2 * n -  1; ++j)
				cout << "*";
		}
		cout << endl;
	}
	return 0;
}