#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int dx[4] = { -1, 0 , 1 , 0 };
int dy[4] = { 0, 1, 0 , -1 };

int main()
{
	int N, cnt = 0;
	cin >> N;

	vector<vector<int>> A(N + 2, vector<int>(N + 2));

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			cin >> A[i][j];
		}
	}

	bool isPeak;

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			isPeak = true;

			for (int k = 0; k < 4; k++)
			{
				if (A[i][j] <= A[i + dx[k]][j + dy[k]])
				{
					isPeak = false;
					break;
				}
			}

			if (isPeak) cnt++;
		}
	}

	cout << cnt << endl;

	return 0;
}