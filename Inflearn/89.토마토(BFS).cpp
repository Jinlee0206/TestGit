#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int map[1001][1001];
int dis[1001][1001];

int h[4] = { -1, 0 ,1, 0 };
int v[4] = { 0, -1, 0, 1 };

struct Loc
{
	int x;
	int y;

	Loc(int a, int b)
	{
		x = a;
		y = b;
	}
};

int main()
{
	int n, m, res = 0;

	cin >> n >> m;

	queue<Loc> q;

	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> map[i][j];

			if (map[i][j] == 1) q.push(Loc(i, j));
		}
	}

	while (!q.empty())
	{
		Loc tmp = q.front();
		q.pop();

		for (int k = 0; k < 4; k++)
		{
			int xx = tmp.x + h[k];
			int yy = tmp.y + v[k];

			if (map[xx][yy] == 0 && xx <= m && xx>=1 && yy >= 1 && yy <= n)
			{
				q.push(Loc(xx, yy));
				map[xx][yy] = 1;
				dis[xx][yy] = dis[tmp.x][tmp.y] + 1;
			}
		}
	}
	
	bool isRipened = true;

	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (map[i][j] == 0) isRipened = false;
		}
	}

	if (isRipened)
	{
		for (int i = 1; i <= m; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				if (res < dis[i][j]) res = dis[i][j];
			}
		}
		cout << res << "\n";
	}
	else cout << "-1" << "\n";

	return 0;
}