#include <iostream>
using namespace std;

long long solution(long long s, long long e)
{
	int i = 0;
	int p{ 1 };

	for (int j = 1; j <= s; j++) {
		p = p*(e - j + 1) / j; 
	}

	return p;
}

int main()
{
	int test_case{ 0 };
	long long east_cnt{ 0 }, west_cnt{ 0 };

	cin >> test_case;

	while (test_case--)
	{
		cin >> west_cnt >> east_cnt;

		cout << solution(west_cnt, east_cnt) << endl;
	}

	return 0;
}