#include <cstdio>
using namespace std;

int zero_data[41] = { 1, 0, };
int one_data[41] = { 0, 1, };

int main()
{
	int num = 0;
	int test_case = 0;

	for (int i = 2; i <= 40; ++i)
	{
		zero_data[i] = zero_data[i - 2] + zero_data[i - 1];
		one_data[i]  = one_data[i - 2] + one_data[i - 1];
	}

	scanf("%d", &test_case);

	while(test_case)
	{
		scanf("%d", &num);	

		if (num > 40 || num < 0) continue;

		printf("%d %d\n", zero_data[num], one_data[num]);

		test_case--;
	}

	return 0;
}