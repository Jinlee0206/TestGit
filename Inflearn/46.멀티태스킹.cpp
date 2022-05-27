#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N, K, pos = 0;
	cin >> N;

	vector<int> A(N + 1);

	for (int i = 1; i <= N; i++)
	{
		cin >> A[i];
	}

	cin >> K;

	while (K--)
	{
		pos++;
	}

	return 0;
}