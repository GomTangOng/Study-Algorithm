#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;

struct Point { int x, y; };

bool compareX(Point &p1, Point &p2) { return p1.x < p2.x; }
bool compareY(Point &p1, Point &p2) { return p1.y < p2.y; }

class CClosestPair
{
public :
	void Init();
	int  FindClosestPair(Point *p, int p_num);
	void Print();
	int  GetMinDistance(Point *p1, Point *p2);
private :
	Point *m_point;
	int    m_minDistance;
};

void CClosestPair::Init()
{
	int T;
	cin >> T;
	m_point = new Point[T];
	for (int i = 0; i < T; ++i)
		cin >> m_point[i].x >> m_point[i].y;
	
	sort(m_point, m_point + T, compareX);

	m_minDistance = FindClosestPair(m_point, T);
}
int CClosestPair::FindClosestPair(Point *p, int p_num)
{
	if (p_num == 2) return GetMinDistance(&p[0], &p[1]);
	if (p_num == 3) return min({ GetMinDistance(&p[0], &p[1]), GetMinDistance(&p[1], &p[2]), GetMinDistance(&p[0], &p[2]) });

	int midX = (p[p_num / 2 - 1].x + p[p_num / 2].x) / 2;
	int minDist = min(FindClosestPair(p, p_num / 2), FindClosestPair(p + p_num / 2, p_num - p_num / 2));

	Point* temp = new Point[p_num];
	int t_i = 0;

	for (int i = 0; i < p_num; ++i)
	{
		int t = midX - p[i].x;
		if (t * t <= minDist) temp[t_i++] = p[i];
	}

	sort(temp, temp + t_i, compareY);

	for (int i = 0; i < t_i; ++i)
	{
		for (int j = i+1; j < t_i && j <= i + 6; ++j)
		{
			minDist = min(minDist, GetMinDistance(&temp[i], &temp[j]));
		}
	}

	delete[] temp;
	return minDist;
}

int CClosestPair::GetMinDistance(Point *p1, Point *p2)
{
	return (p1->x - p2->x) * (p1->x - p2->x) + (p1->y - p2->y) * (p1->y - p2->y);
}

void CClosestPair::Print()
{
	cout << m_minDistance << endl;
}

int main(void) {
	CClosestPair test;

	test.Init();
	test.Print();

	return 0;
}