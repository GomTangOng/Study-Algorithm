#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	//int n1, n2, n3;
	//scanf("%d %i %i", &n1, &n2, &n3);
	//printf("%d %d %d\n", n1, n2, n3);
	char ch[100];
	char c;
	int d;
	//scanf("%s", ch);
	scanf("%[^123]", ch);
	//scanf("%d", &d);

	//cout << d << endl;
	printf("%s", ch);

	return 0;
}