#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int A[1001], N;

// 결정 알고리즘
// 답이 되는지 안되는지 확인
int Count(int size)
{
	int cnt = 1, sum = 0;
	
	for (int i = 1; i <= N; i++)
	{
		if (sum + A[i] > size)
		{
			cnt++;
			sum = A[i];
		}
		else sum += A[i];
	}

	return cnt;
}

int main()
{
	int M;
	int lt =1 , rt = 0, mid, res = 0, maxx= -21470000000;

	cin >> N >> M;

	for (int i = 1; i <= N; i++)
	{
		cin >> A[i];
		rt += A[i];
		if (maxx < A[i]) maxx = A[i];
	}

	// 이분검색 (Binary Search)
	while (lt <= rt)
	{
		mid = (lt + rt) / 2;

		if (mid >= maxx && Count(mid) <= M)
		{
			res = mid;
			rt = mid - 1;
		}
		else lt = mid + 1;
	}
	
	cout << res;

	return 0;
}