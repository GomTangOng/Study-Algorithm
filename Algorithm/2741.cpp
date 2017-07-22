#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	
	for(int i=1; i<=9; ++i)
		printf("%d * %d = %d\n", t, i, t * i);
	
	return 0;
}