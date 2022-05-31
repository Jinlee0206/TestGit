#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<int> F(N);
	vector<int> R(N);

	vector<vector<int>> U(N, vector<int>(N));

	for (int i = 0; i < N; i++)
	{
		cin >> F[i];
	}

	for (int i = 0; i < N; i++)
	{
		cin >> R[i];
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			U[i][j] = F[j];
			if (U[i][j] > R[N - i - 1]) U[i][j] = R[N - i - 1];
		}
	}

	int cnt = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			//cout << U[i][j] << " ";
			cnt += U[i][j];
		}
		//cout << endl;
	}
	
	cout << cnt;

	return 0;
}