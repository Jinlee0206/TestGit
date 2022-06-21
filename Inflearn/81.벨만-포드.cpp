#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int dist[101];

struct Edge {
	int start;
	int end;
	int val;

	Edge(int a, int b, int c)
	{
		start = a;
		end = b;
		val = c;
	}
};

int main()
{
	int N, M, s , e;
	cin >> N >> M;

	vector<Edge> edge;

	for (int i = 0; i < M; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		edge.push_back(Edge(a, b, c));
	}

	for (int i = 1; i <= N; i++)
	{
		dist[i] = 2147000000;
	}

	cin >> s >> e;

	dist[s] = 0;

	for (int i = 1; i < N; i++)
	{
		for (int j = 0; j < edge.size(); j++)
		{
			int u = edge[j].start;
			int v = edge[j].end;
			int w = edge[j].val;
			
			if (dist[u] != 2147000000 && dist[u] + w < dist[v]) dist[v] = dist[u] + w;
		}
	}

	for (int j = 0; j < edge.size(); j++)
	{
		int u = edge[j].start;
		int v = edge[j].end;
		int w = edge[j].val;

		if (dist[u] != 2147000000 && dist[u] + w < dist[v])
		{
			cout << "-1\n";
			exit(0);
		}
	}

	cout << dist[e] << endl;

	return 0;
}