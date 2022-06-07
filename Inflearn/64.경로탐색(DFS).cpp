#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M, cnt = 0;

void DFS(vector<vector<int>> vec, vector<bool> visit, int vertex)
{
	if (vertex == N)
	{
		cnt++;
	}

	else {
		for (int i = 1; i <= N; i++)
		{
			if (vec[vertex][i] == 1 && visit[i] == 0)
			{
				visit[i] = 1;
				DFS(vec, visit, i);
				visit[i] = 0;
			}
		}
	}
}

int main()
{
	cin >> N >> M;

	vector<vector<int>> A(N + 1, vector<int>(N + 1));
	vector<bool> visited(N + 1, false);


	for (int i = 1; i <= M; i++)
	{
		int a, b;
		cin >> a >> b;
		A[a][b] = 1;
	}

	visited[1] = 1;
	DFS(A, visited, 1);

	cout << cnt << endl;

	return 0;
}