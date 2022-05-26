#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M, pos = 0, tmp;
	cin >> N >> M;
	
	// push_back() 활용
	// A 벡터 선언만 하기, 메모리에 할당되진 않음, push_back() 할때 마다 동적으로 stack 됨
	vector<int> A;

	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		A.push_back(tmp);
	}

	sort(A.begin(), A.end());

	int lt = 0, rt, mid;
	rt = N - 1;
	while (lt <= rt)
	{
		mid = (lt + rt) / 2;
		if (A[mid] == M)
		{
			cout << mid + 1;
			return 0;
		}
		else if (A[mid] > M) rt = mid - 1;
		else lt = mid + 1;
	}



	/*
	for (int i = 0; i < N; i++)
	{
		if (M == A[i]) pos = i;
	}

	cout << pos +1 << endl;
	*/

	return 0;
}