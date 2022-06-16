#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 반복문을 이용한 factorial 함수
/*int factorial(int a)
{
	int res = 1;
	for (int i = 1; i <= a; i++)
	{
		res *= i;
	}
	return res;
}*/

// 재귀를 이용한 factorial 함수
/*
int factorial(int a)
{
	if(a == 1) return 1;

	return a * factorial(a - 1);
}*/

// 메모이 제이션
// 미리 구한 값을 배열로 저장해서 해당 값이 반복 호출될 때 바로 return, 경로 압축
int dy[21][21];

int factorial(int n, int r)
{
	if (dy[n][r] > 0) return dy[n][r];
	if (n == r || r == 0) return 1;
	else return dy[n][r] = factorial(n - 1, r - 1) + factorial(n - 1, r);
} 

int main()
{
	int a, b;
	cin >> a >> b;

	//cout << factorial(a) / (factorial(b) * factorial(a-b)) << endl;

	cout << factorial(a, b) << endl;

	return 0;
}