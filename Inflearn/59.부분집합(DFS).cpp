#include <iostream>

int N;
int ch[11];

using namespace std;
int DFS(int lv)
{
	if (lv == N + 1)
	{
		for (int i = 1; i <= N; i++)
		{
			if (ch[i] == 1) cout << i << " ";
		}
		cout << endl;
	}

	else
	{
		ch[lv] = 1;
		DFS(lv + 1);
		ch[lv] = 0;
		DFS(lv + 1);
	}
}
int main()
{
	cin >> N;
	DFS(1);

	return 0;
}