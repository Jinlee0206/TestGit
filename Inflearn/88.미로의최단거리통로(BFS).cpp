#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int map[10][10], dis[10][10];

int dx[4] = { -1, 0 , 1 , 0 };
int dy[4] = { 0, 1, 0, -1 };

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
	for (int i = 1; i <= 7; i++)
	{
		for (int j = 1; j <= 7; j++)
		{
			cin >> map[i][j];
		}
	}

	queue<Loc> q;

	q.push(Loc(1, 1));
	map[1][1] = 1;

	while (!q.empty())
	{
		Loc tmp = q.front();
		q.pop();

		for (int k = 0; k < 4; k++)
		{
			int xx = tmp.x + dx[k];
			int yy = tmp.y + dy[k];

			if (map[xx][yy] == 0 && xx >= 1 && xx <= 7 && yy >= 1 && yy <=7 )
			{
				map[xx][yy] = 1;
				q.push(Loc(xx, yy));
				dis[xx][yy] = dis[tmp.x][tmp.y] + 1;
			}
		}

	}

	cout << dis[7][7] << "\n";

	return 0;
}