#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int ch[30], dis[30];

int main()
{
	int N, M, x;
	vector<int> map[30];
	queue<int> q;

	cin >> N >> M;

	for (int i = 1; i <= M; i++)
	{
		int a, b;
		cin >> a >> b;
		map[a].push_back(b);
	}

	q.push(1);
	ch[1] = 1;

	while (!q.empty())
	{
		x = q.front();
		q.pop();
		for (int i = 0; i < map[x].size(); i++)
		{
			if (ch[map[x][i]] == 0)
			{
				ch[map[x][i]] = 1;
				q.push(map[x][i]);
				dis[map[x][i]] = dis[x] + 1;
			}
		}
	}

	for (int i = 2; i <= N; i++)
	{
		cout << i << " : " << dis[i] << endl;
	}


	return 0;
}