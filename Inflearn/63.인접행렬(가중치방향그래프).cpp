#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 

int main()
{
	int N, M;

	cin >> N >> M;

	vector<vector<int>> A(N+1, vector<int>(N+1));

	for (int i = 1; i <= M; i++)
	{
		int a, b, c;

		cin >> a >> b >> c;

		A[a][b] = c;

	}


	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			cout << A[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}