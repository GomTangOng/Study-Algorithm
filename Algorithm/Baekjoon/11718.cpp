#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	char ch[100];

	while (fgets(ch, 100, stdin))
	{
		printf("%s", ch);
	}		
	return 0;
}