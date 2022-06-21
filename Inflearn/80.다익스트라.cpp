#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

// Minimum Heap ±¸Çö
struct Edge
{
	int v;
	int dis;

	Edge(int a, int b)
	{
		v = a;
		dis = b;
	}

	bool operator<(const Edge& b) const
	{
		return dis > b.dis;
	}
};

int main()
{
	int N, M, res, x;
	cin >> N >> M;

	vector<pair<int, int> > graph[21];
	priority_queue<Edge> pQ;

	vector<int> dist(N + 1, 2147000000);

	for (int i = 1; i <= M; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;

		graph[a].push_back({ b, c });
	}


	pQ.push(Edge(1,0));
	dist[1] = 0;

	while (!pQ.empty())
	{
		int now = pQ.top().v;
		int cost = pQ.top().dis;
		pQ.pop();

		if (cost > dist[now]) continue;
		for (int i = 0; i < graph[now].size(); i++)
		{
			int next = graph[now][i].first;
			int nextDis = cost + graph[now][i].second;

			if (dist[next] > nextDis)
			{
				dist[next] = nextDis;
				pQ.push(Edge(next, nextDis));
			}
		}
	}

	for (int i = 2; i <= N; i++)
	{
		if (dist[i] != 2147000000) cout << i << ": " << dist[i] << endl;
		else cout << i << ": impossible" << endl;
	}

	return 0;
}