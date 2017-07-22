#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int t;
	int num;
	int sum = 0;

	scanf("%d", &t);

	while (t--)
	{
		scanf("%1d", &num);
		sum += num;
	}

	printf("%d\n", sum);
	return 0;
}