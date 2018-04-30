#include <iostream>
using namespace std;

#define MAX_LENGTH 50

int farm[MAX_LENGTH][MAX_LENGTH]{ 0, };
int bechu_cnt{ 0 }, width{ 0 }, height{ 0 };

void Check(int x, int y)
{
	if (y < 0 || x < 0 || y >= height || x >= width)
		return;
	if (farm[y][x] == 0) 
		return;	

	farm[y][x] = 0;

	Check(x - 1, y);
	Check(x + 1, y);
	Check(x, y - 1);
	Check(x, y + 1);
}

int Solution()
{
	int worm_cnt{ 0 };

	for (int y = 0; y < height; ++y)
	{
		for (int x = 0; x < width; ++x)
		{
			if (farm[y][x] == 0) continue;

			Check(x, y);

			worm_cnt++;
		}
	}
	return worm_cnt;
}

void Clear()
{
	for (int i = 0; i < MAX_LENGTH; ++i)
	{
		for (int j = 0; j < MAX_LENGTH; ++j)
		{
			farm[i][j] = 0;
		}
	}

	bechu_cnt = width = height = 0;
}


int main()
{
	int test_case{ 0 };

	cin >> test_case;

	while (test_case--)
	{
		int x, y;

		cin >> width >> height >> bechu_cnt;

		for (int i = 0; i < bechu_cnt; ++i)
		{
			cin >> x >> y;
			farm[y][x] = 1;
		}

		cout << Solution() << endl;

		Clear();
	}

	return 0;
}