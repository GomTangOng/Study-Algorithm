// º°Âï±â - 1

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int n;

	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j >= 0; --j)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}