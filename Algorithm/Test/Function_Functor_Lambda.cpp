#include <iostream>
#include <functional>
#include <chrono>
using namespace std;
using namespace std::chrono;

#define MAX_NUM 1000000000

/*
 *  Function vs Functor vs Lambda 호출 시간 테스트
 */

class CTest
{
public :
	int operator()(int i)
	{
		m_num += i;
		return m_num;
	}
	int m_num{ 0 };
private :
	
};

void Plus(int &num, int add)
{
	num += add;
}

inline void Plus2(int &num, int add)
{
	num += add;
}

int n = 0;

int main()
{
	CTest t;

	// 함수 객체
	auto start = high_resolution_clock::now();
	for (int i = 0; i < MAX_NUM; ++i)
	{
		t(1);
	}

	auto duration = high_resolution_clock::now() - start;
	cout << "Functor Call : " << t.m_num << " -> Time : " << duration_cast<nanoseconds>(duration).count() << "ns" << endl;


	// 함수	
	start = high_resolution_clock::now();
	for (int i = 0; i < MAX_NUM; ++i)
	{
		Plus(n, 1);
	}
	duration = high_resolution_clock::now() - start;
	
	cout << "Function Call : " << n << " -> Time : "<< duration_cast<nanoseconds>(duration).count() << "ns" << endl;
	
	n = 0;

	// 인라인 함수
	start = high_resolution_clock::now();
	for (int i = 0; i < MAX_NUM; ++i)
	{
		Plus2(n, 1);
	}
	duration = high_resolution_clock::now() - start;

	cout << "Inline Function Call : " << n << " -> Time : " << duration_cast<nanoseconds>(duration).count() << "ns" << endl;


	// 람다
	n = 0;
	start = high_resolution_clock::now();	
	for (int i = 0; i < MAX_NUM; ++i)
	{
		[&]()
		{
			n += 1;
		}();
	}
	duration = high_resolution_clock::now() - start;
	cout << "Lambda : " << n << " -> Time : " << duration_cast<nanoseconds>(duration).count() << "ns" << endl;

	return 0;
}