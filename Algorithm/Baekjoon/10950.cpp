#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	int a, b;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &a);
		scanf("%d", &b);
		cout << a + b << endl;
	}
	return 0;
}