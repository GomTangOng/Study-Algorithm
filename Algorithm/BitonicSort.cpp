#include <iostream>
using namespace std;

#define MAX_NUM 100

int a[MAX_NUM] { 9, 6, 8, 4, 1, 10, 3, 5, 7, 2 ,16 ,13 ,14 ,15 ,11 ,12 };
int b[MAX_NUM]{ 9, 6, 8, 4, 1, 10, 3, 5, 7, 2, 16, 13, 14, 15, 11, 12 };


void BitonicSort(int start, int n, bool isAscending);
void BitonicMerge(int start, int n, bool isAscending);
void Compare(int i, int j, bool isAscending);
void Exchange(int i, int j);
void Print();

int main()
{
	cout << "=========Sort Àü==========" << endl;
	Print();
	cout << "=========Sort ÈÄ==========" << endl;
	BitonicSort(0, 16, true);
	
	return 0;
}

void BitonicSort(int start, int n, bool isAscending)
{
	if (n == 1) return;
	int m = n / 2;
	BitonicSort(start, m, true);
	BitonicSort(start + m, m, false);

	BitonicMerge(start, n, isAscending);
}

void BitonicMerge(int start, int n, bool isAscending)
{
	if (n == 1) return;
	int m = n / 2;

	for (int i = start; i < start + m; ++i)
		Compare(i, i + m, isAscending);

	BitonicMerge(start, m, isAscending);
	BitonicMerge(start + m, m, isAscending);
}

void Compare(int i, int j, bool isAscending)
{
	if (isAscending == (a[i] > a[j]))
	{
		Exchange(i, j);
		Print();
	}
}

void Exchange(int i, int j)
{
	int t = a[i];
	a[i] = a[j];
	a[j] = t;
}


void Print()
{
	for (int i = 0; i < 16; ++i)
	{
		if (b[i] != a[i])
		{
			cout << a[i] << "*\t";
			b[i] = a[i];
		}
		else
		{
			cout << a[i] << "\t";
		}
	}
	cout << endl;
}