// С§Че

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

class CSet
{
public :
	void add(int x);
	void remove(int x);
	int check(int x);
	void toggle(int x);
	void all();
	void empty();
private :
	int m_data{ 0 };
};

int main()
{
	CSet set;
	int t;
	int n;
	char str[100];

	scanf("%d", &t);
	while (t--)
	{
		scanf("%s %d", str, &n);
		if (!strcmp(str, "add"))
			set.add(n);
		else if (!strcmp(str, "remove"))
			set.remove(n);
		else if (!strcmp(str, "check"))
			cout << set.check(n) << endl;
		else if (!strcmp(str, "toggle"))
			set.toggle(n);
		else if (!strcmp(str, "all"))
			set.all();
		else
			set.empty();
	}

	return 0;
}

void CSet::add(int x)
{
	if (!check(x))
		m_data = m_data | (1 << x);
}

void CSet::remove(int x)
{
	if (check(x))
		m_data = m_data & ~(1 << x);
}
int CSet::check(int x)
{
	return (m_data & (1 << x)) ? 1 : 0;
}
void CSet::toggle(int x)
{
	if (check(x))
		remove(x);
	else
		add(x);
}
void CSet::all()
{
	for (int i = 0; i < 20; ++i)
		add(i + 1);
}
void CSet::empty()
{
	m_data = 0;
}