#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int min = 1000000;
	int max = -1000000;
	int n, num;
	
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &num);
		if (min > num) min = num;
		if (num > max) max = num;
	}
	cout << min << " " << max << endl;
	return 0;
}