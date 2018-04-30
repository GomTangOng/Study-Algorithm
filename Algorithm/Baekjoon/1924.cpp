#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	char *ch[] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int day = 0;
	int x, y;

	scanf("%d %d", &x, &y);

	for (int i = 0; i < x - 1; ++i)
		day += month[i];
	day += y;

	printf("%s\n", ch[day % 7]);

	return 0;
}