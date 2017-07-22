// º°Âï±â - 9
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int n;

	scanf("%d", &n);
	int width = n * 2 - 1;
	for (int i = 0; i < n; ++i)
	{
		int blank_cnt = i;
		int star_cnt = width - blank_cnt * 2;

		for (int j = 0; j < blank_cnt; ++j)
			cout << " ";
		for (int j = 0; j < star_cnt; ++j)
			cout << "*";
		cout << endl;
	}
	for (int i = n - 2; i >= 0; --i)
	{
		int blank_cnt = i;
		int star_cnt = width - blank_cnt * 2;

		for (int j = 0; j < blank_cnt; ++j)
			cout << " ";
		for (int j = 0; j < star_cnt; ++j)
			cout << "*";
		cout << endl;
	}
	return 0;
}