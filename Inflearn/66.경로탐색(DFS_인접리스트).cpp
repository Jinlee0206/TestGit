#include <iostream>
#include <vector>
using namespace std;

int ch[30], cnt = 0, N;

vector<int> map[30];

void DFS(int v)
{
	if (v == N)
	{
		cnt++;
	}
	else
	{
		for (int i = 0; i < map[v].size(); i++)
		{
			if (ch[map[v][i]] == 0)
			{
				ch[map[v][i]] = 1;
				DFS(map[v][i]);
				ch[map[v][i]] = 0;
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
		int a, b;
		cin >> a >> b;

		map[a].push_back(b);
	}

	ch[1] = 1;
	DFS(1);

	cout << cnt << "\n";


	return 0;
}