#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int a, b;
	while (cin >> a >> b)					// C++ Version
	{
		cout << a + b << endl;
	}

	//while (scanf("%d %d", &a, &b) != EOF)		// C Version
	//{

	//}

	// scanf("%s", s);	한줄 입력 받기
	// scanf("%[^\n]\n", s);	/n 뺀 문자열 받기
	// getline(cin, s);
	// fgets()는 줄 바꿈까지 입력 받는다.

	return 0;
}