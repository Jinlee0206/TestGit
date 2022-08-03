#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	
	vector<vector<int>> vec(n + 1, vector<int>(n + 1));
	vector<vector<int>> dis(n + 1, vector<int>(n + 1));

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			int a;
			cin >> a;
			vec[i][j] = a;
		}
	}

	dis[1][1] = vec[1][1];

	for (int i = 1; i <= n; i++)
	{
		dis[1][i] = dis[1][i - 1] + vec[1][i];
		dis[i][1] = dis[i - 1][1] + vec[i][1];
	}

	for (int i = 2; i <=n; i++)
	{
		for (int j = 2; j <= n; j++)
		{
			dis[i][j] = min(dis[i - 1][j], dis[i][j - 1]) + vec[i][j];
		}
	}

	cout << dis[n][n] << "\n";

	return 0;
}