#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int dy[21][21];

int DFS(int x, int y, vector<vector<int>> &vec)
{
	if (dy[x][y] != 0) return dy[x][y];
	if (x == 0 && y == 0) return vec[0][0];
	else 	
	{
		if (y == 0) return dy[x][y] = DFS(x - 1, y, vec) + vec[x][y];
		else if (x == 0) return dy[x][y] = DFS(x, y - 1, vec) + vec[x][y];
		else return	dy[x][y] = min(DFS(x - 1, y, vec), DFS(x, y - 1, vec)) + vec[x][y];
	}
}

int main()
{
	int n;
	cin >> n;

	vector<vector<int>> vec(n, vector<int>(n));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> vec[i][j];
		}
	}

	cout << DFS(n-1, n-1, vec) << "\n";

	return 0;
}