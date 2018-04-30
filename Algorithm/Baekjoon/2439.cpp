// º°Âï±â - 2

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int n;

	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		for (int j = n - i; j > 1; --j)
			cout << " ";
		for (int j = i; j >= 0; --j)
			cout << "*";
		cout << endl;
	}
	return 0;
}