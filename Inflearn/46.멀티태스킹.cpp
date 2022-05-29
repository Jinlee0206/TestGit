#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N, K, pos = 0, bp = 0, cnt = 0;
	cin >> N;

	vector<int> A(N + 1);

	for (int i = 1; i <= N; i++)
	{
		cin >> A[i];
	}

	cin >> K;

	while (1)
	{
		pos++;
		if (pos > N) pos = 1;

		if (A[pos] != 0)
		{
			cnt++;
			A[pos]--;
			pos++;
		}

		if (cnt == K) break;

	}



	return 0;
}