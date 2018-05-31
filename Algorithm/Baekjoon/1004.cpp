#include <cstdio>
#include <math.h>
using namespace std;

struct pos
{
	int x, y;
	int r;
};

int GetDistance(const pos &point, const pos &planet)
{
	return sqrtf((float)(planet.x - point.x) * (planet.x - point.x) + (planet.y - point.y) * (planet.y - point.y));
}

bool InCircle(const pos &point, const pos &planet)
{
	return planet.r > GetDistance(point, planet);
}

bool InValiedPos(const pos& p)
{
	if (-1000 > p.x || 1000 < p.x || -1000 > p.y || 1000 < p.y)
	{
		return false;
	}
	return true;
}

bool InValiedRadian(const int r)
{
	if (0 >= r || 1000 < r) return false;
	return true;
}

int main()
{
	int test_case = { 0 };
	pos src_pos, dest_pos;
	int planet_cnt = { 0 };
	pos planet_pos[50];
	int res = { 0 };
	bool bSameInCircle = false;

	scanf("%d", &test_case);

	while (test_case--)
	{
		scanf("%d %d %d %d", &src_pos.x, &src_pos.y, &dest_pos.x, &dest_pos.y);
		scanf("%d", &planet_cnt);

		for (int i = 0; i < planet_cnt; ++i)
		{
			scanf("%d %d %d", &planet_pos[i].x, &planet_pos[i].y, &planet_pos[i].r);

			if (InCircle(src_pos, planet_pos[i]) && InCircle(dest_pos, planet_pos[i]))
			{
				continue;
			}

			if (InCircle(src_pos, planet_pos[i]))
			{
				res++;
			}
			if (InCircle(dest_pos, planet_pos[i]))
			{
				res++;
			}
		}
		printf("%d\n", res);
		res = 0;
	}

	return 0;
}