#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, ch[30], cost = 2147000000;
int map[30][30];

void DFS(int v, int sum)
{
	if (v == N)
	{
		if (sum < cost) cost = sum;
	}
	else
	{
		for (int i = 1; i <= N; i++)
		{
			if (map[v][i] > 0 && ch[i] == 0)
			{
				ch[i] = 1;
				DFS(i, sum + map[v][i]);
				ch[i] = 0;
			}
		}
	}
}

int main()
{
	int M;

	cin >> N >> M;

	for (int i = 1; i <= M; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		map[a][b] = c;
	}

	DFS(1, 0);

	cout << cost << "\n";

	return 0;
}