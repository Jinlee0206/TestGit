#include <iostream>
#include <algorithm>
#include <vector>
#include "44.마구간정하기(이분검색응용)-결정알고리즘.h"

using namespace std;

int N;
int Count(int len, vector<int> vec)
{
	int cnt = 1, pos = vec[1];

	for (int i = 2; i <= N; i++)
	{
		if (vec[i] - pos >= len)
		{
			cnt++;
			pos = vec[i];
		}
	}

	return cnt;
}

int main()
{
	int C;
	cin >> N >> C;

	vector<int> A(N+1);

	for (int i = 1; i <= N; i++)
	{
		cin >> A[i];
	}

	sort(A.begin() + 1, A.end());

	int lt =1 , rt, mid, res = 0;

	rt = A[N];

	while (lt <= rt)
	{
		mid = (lt + rt) / 2;

		if (Count(mid, A) >= C)
		{
			res = mid;
			lt = mid + 1;
		}
		else rt = mid - 1;

	}

	cout << res;

	return 0;
}