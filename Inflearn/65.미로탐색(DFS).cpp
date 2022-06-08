#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int map[9][9], ch[9][9], cnt = 0;

int hor[4] = { -1, 0, 1 ,0 };
int ver[4] = { 0, 1, 0 ,-1 };

void DFS(int h, int v)
{
	if (h == 7 && v == 7)
	{
		cnt++;
	} 
	else
	{
		for (int k = 0; k < 4; k++)
		{
			int xx = h + hor[k];
			int yy = v + ver[k];

			// 범위 제한
			if (xx < 1 || xx > 7 || yy < 1 || yy >7) continue;

			if (map[xx][yy] == 0 && ch[xx][yy] == 0)
			{
				ch[xx][yy] = 1;
				DFS(xx, yy);
				ch[xx][yy] = 0;
			}
		}
		
	}
}

int main()
{
	/*for (int i = 0; i <= 8; i++)
	{
		for (int j = 0; j <= 8; j++)
		{
			map[i][j] = 1;
		}
	}*/

	for (int i = 1; i <= 7; i++)
	{
		for (int j = 1; j <= 7; j++)
		{
			int a;
			cin >> a;

			map[i][j] = a;
		}
	}

	ch[1][1] = 1;

	DFS(1, 1);

	cout << cnt << "\n";

	/*
	cout << endl;


	
	for (int i = 0; i <= 8; i++)
	{
		for (int j = 0; j <= 8; j++)
		{
			cout << map[i][j] << " ";
		}
		cout << endl;
	}
	*/

	return 0;
}