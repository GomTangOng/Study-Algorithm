// º°Âï±â - 7
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int n;

	scanf("%d", &n);
	int width = n * 2;
	for (int i = 0; i < n; ++i)
	{
		int star_cnt = (i + 1) * 2;
		int blank_cnt = width - star_cnt;
		
		for (int j = 0; j <= i; ++j)
			cout << "*";
		for (int j = 0; j < blank_cnt; ++j)
			cout << " ";
		for (int j = 0; j <= i; ++j)
			cout << "*"; 
		cout << endl;
	}
	for (int i = n - 2; i >= 0; --i)
	{
		int star_cnt = (i + 1) * 2;
		int blank_cnt = width - star_cnt;

		for (int j = 0; j <= i; ++j)
			cout << "*";
		for (int j = 0; j < blank_cnt; ++j)
			cout << " ";
		for (int j = 0; j <= i; ++j)
			cout << "*";
		cout << endl;
	}
	return 0;
}