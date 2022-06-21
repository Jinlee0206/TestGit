#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int ch[30];
struct Edge {
	int v;
	int dis;

	Edge(int a, int b)
	{
		v = a;
		dis = b;
	}

	// 최소 힙 리턴 
	// 내림 차순 정렬 b/c pQ는 top()이 가장 큰 수 이므로
	bool operator<(const Edge& b) const{
		return dis > b.dis;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int V, E, res = 0;
	cin >> V >> E;

	priority_queue<Edge> pQ;
	vector<pair<int, int> > map[30];

	for (int i = 1; i <= E; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;

		map[a].push_back({ b, c });
		map[b].push_back({ a, c });
	}

	pQ.push(Edge(1, 0));
	while (!pQ.empty())
	{
		Edge tmp = pQ.top();
		pQ.pop();
		int v = tmp.v;
		int cost = tmp.dis;

		if (ch[v] == 0)
		{
			res += cost;
			ch[v] = 1;
			for (int i = 0; i < map[v].size(); i++)
			{
				pQ.push(Edge(map[v][i].first, map[v][i].second));
			}
		}
	}

	cout << res << "\n";

	return 0;
}