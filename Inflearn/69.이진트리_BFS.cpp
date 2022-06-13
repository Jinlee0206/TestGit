#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;
int q[100], front = -1, back = -1, ch[10];
vector<int> map[10];
int main()
{
	for (int i = 1; i <= 6; i++)
	{
		int a, b;
		cin >> a >> b;

		map[a].push_back(b);
		map[b].push_back(a);
	}

	q[++back] = 1;
	ch[1] = 1;

	int x;
	while (front < back)
	{
		x = q[++front];
		cout << x << " ";

		for (int i = 0; i < map[x].size(); i++)
		{
			if (ch[map[x][i]] == 0)
			{
				ch[map[x][i]] = 1;
				q[++back] = map[x][i];
			}
		}
	}

	return 0;
}