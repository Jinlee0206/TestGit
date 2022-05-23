#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N, M, K;
	cin >> N;

	vector<int> a(N);

	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}

	cin >> M;
	vector<int> b(M);
	
	for (int i = 0; i < M; i++)
	{
		cin >> b[i];
	}

	K = N + M;

	a.resize(K);

	for (int i = N; i < K; i++)
	{
		a[i] = b[i - N];
	}

	sort(a.begin(), a.end());

	for (int i = 0; i < K; i++)
	{
		cout <<  a[i] << " ";
	}

	return 0;
}