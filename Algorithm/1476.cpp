#include <iostream>
using namespace std;

int main()
{
	int e, s, m;
	int res = 1;
	// MAX : 15, 28, 19
	cin >> e >> s >> m;

	while (!(e == 1 && s == 1 && m == 1))
	{
		e--; s--; m--;
		if (e < 1) e = 15;
		if (s < 1) s = 28;
		if (m < 1) m = 19;
		res++;
	}

	cout << res << endl;

	return 0;
}