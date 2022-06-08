#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M, cnt;

void DFS(int vertex, vector<vector<int>> vec, vector<bool> ch)
{
	if (vertex == N)
	{
		cnt++;
	}
	else
	{
		for (int i = 1; i <= N; i++)
		{
			if (vec[vertex][i] == 1 && ch[i] == 0)
			{
				ch[i] = 1;
				DFS(i, vec, ch);
				ch[i] = 0;
			}
		}
		
	}
}

int main()
{

	cin >> N >> M;

	vector<vector<int>> A(N + 1, vector<int>(N + 1));
	vector<bool> ch(N + 1);

	for (int i = 1; i <= M; i++)
	{
		int a, b;
		cin >> a >> b;
		A[a][b] = 1;
	}

	ch[1] = 1;

	DFS(1, A, ch);

	cout << cnt << "\n";


	return 0;
}