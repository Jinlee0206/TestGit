#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int ch[10000];
int val[] = { -1, 1, 5 };

int main()
{
	int S, E, x, pos;
	cin >> S >> E;

	queue <int> q;

	q.push(S);
	ch[S] = 1;

	while (!q.empty())
	{
		x = q.front();
		q.pop();

		for (int i = 0; i < 3; i++)
		{
			pos = x + val[i];

			if (pos == E)
			{
				cout << ch[x] << "\n";
				exit(0);
			}
			
			if (ch[pos] == 0)
			{
				ch[pos] = ch[x] + 1;
				q.push(pos);
			}
		}
	}

	return 0;
}