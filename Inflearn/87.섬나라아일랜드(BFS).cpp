#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int map[30][30], ch[30][30];


int h[8] = { -1, 0, 1, 1, 1, 0, -1 , -1};
int v[8] = { 1, 1, 1, 0, -1, -1, -1, 0 };

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
	int n, cnt = 0;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> map[i][j];
		}
	}

	queue<Loc> q;
	

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++)
		{
			if (map[i][j] == 1)
			{
				q.push(Loc(i, j));
				map[i][j] = 0;

				while (!q.empty())
				{
					Loc tmp = q.front();
					q.pop();


					for (int k = 0; k < 8; k++)
					{
						int xx = tmp.x + h[k];
						int yy = tmp.y + v[k];

						if (map[xx][yy] == 1)
						{
							q.push(Loc(xx, yy));
							map[xx][yy] = 0;
						}
					}
				}
				cnt++;
			}
			
		}
	}

	cout << cnt << "\n";


	return 0;
}