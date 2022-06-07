#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M, tot = 0, a[11], cnt = 0, path[11];

void DFS(int lv, int sum)
{
	if (lv == N + 1)
	{
		if (M == sum) {
			cnt++;

			// path 배열 만들기
			for (int i = 1; i < lv; i++)
			{
				cout << path[i] << " ";
			}
			cout << "\n";
		}
		
	}
	else
	{
		path[lv] = a[lv];
		DFS(lv + 1, sum + a[lv]);

		path[lv] = -a[lv];
		DFS(lv + 1, sum - a[lv]);

		path[lv] = 0;
		DFS(lv + 1, sum);
	}
}

int main()
{
	cin >> N >> M;

	for (int i = 1; i <= N; i++)
	{
		cin >> a[i];
	}
	
	DFS(1, 0);

	if (cnt > 0) cout << cnt << endl;
	else cout << "-1" << endl;

	return 0;
}