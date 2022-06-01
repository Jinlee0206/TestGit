#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int A[1500];

	int p2 = 1, p3 = 1, p5 = 1, min = 2147000000;

	A[1] = 1;

	for (int i = 2; i <= N; i++)
	{
		if (A[p2] * 2 < A[p3] * 3) min = A[p2] * 2;
		else min = A[p3] * 3;
		if (A[p5] * 5 < min) min = A[p5] * 5;

		if (A[p2] * 2 == min) p2++;
		if (A[p3] * 3 == min) p3++;
		if (A[p5] * 5 == min) p5++;

		A[i] = min;
	}

	cout << A[N];

	return 0;
}