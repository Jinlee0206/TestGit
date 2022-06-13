#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, ch[30], cost = 2147000000;

vector<pair<int,int> > map[30];

void DFS(int vertex, int sum)
{
	if (vertex == N)
	{
		if (cost > sum) cost = sum;
	}
	else
	{
		for (int i = 0; i < map[vertex].size(); i++)
		{
			if (ch[map[vertex][i].first] == 0)
			{
				ch[map[vertex][i].first] = 1;
				DFS(map[vertex][i].first, sum + map[vertex][i].second);
				ch[map[vertex][i].first] = 0;

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

		map[a].push_back({ b,c });
		//map[a].push_back(make_pair(b,c));
	}

	ch[1] = 1;

	DFS(1, 0);

	cout << cost << "\n";

	return 0;
}