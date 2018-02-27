#include <cstdio>
#include <iostream>
using namespace std;

class CPermutation
{
public:
	void Push_back(const int data)
	{
		m_nums[m_len++] = data;
	}
	bool Next()
	{
		int t = m_len - 1;
		int i = t, j = t;
		while (m_nums[i - 1] >= m_nums[i] && i > 0) i--;
		if (i <= 0) return false;
		while (m_nums[i - 1] >= m_nums[j]) j--;
		Swap(&m_nums[i - 1], &m_nums[j]);
		j = m_len - 1;
		while (i < j)
		{
			Swap(&m_nums[i], &m_nums[j]);
			i++; j--;
		}
		return true;
	}

	bool Prev()
	{
		int t = m_len - 1;
		int i = t, j = t;
		while (m_nums[i - 1] < m_nums[i] && i > 0) i--;
		if (i <= 0) return false;
		while (m_nums[i - 1] < m_nums[j]) j--;
		Swap(&m_nums[i - 1], &m_nums[j]);
		j = m_len - 1;
		while (i < j)
		{
			Swap(&m_nums[i], &m_nums[j]);
			i++; j--;
		}
		return true;
	}

	void Print()
	{
		for (int i = 0; i < m_len; ++i)
			printf("%d ", m_nums[i]);
		printf("/n");
	}

	void Swap(int *a, int *b)
	{
		int t = *a;
		*a = *b;
		*b = t;
	}

	int m_len{ 0 };
	int m_nums[10000];
};

CPermutation p;

int main()
{
	int t;
	int data;
	int err = -1;
	scanf("%d", &t);
	for (int i = 1; i <= t; ++i)
	{
		p.Push_back(i);
	}
	
	do
	{
		p.Print();
	} while (p.Next());

	return 0;
}