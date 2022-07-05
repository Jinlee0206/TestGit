#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N, M, res = 2147000000, dist, sum =0;

int ch[20];

void DFS(vector<pair<int, int>> &hs, vector<pair<int, int>>& pz, int s, int L)
{
	if (L == M)
	{
		sum = 0;
		for (int i = 0; i < hs.size(); i++)
		{
			int x1 = hs[i].first;
			int y1 = hs[i].second;
			dist = 2147000000;

			for (int j = 0; j < M; j++)
			{
				int x2 = pz[ch[j]].first;
				int y2 = pz[ch[j]].second;
				dist = min(dist, abs(x1 - x2) + abs(y1 - y2));
			}
			sum += dist;
		}
		if (res > sum) res = sum;
	
	}
	else
	{
		for (int i = s; i < pz.size(); i++)
		{
			ch[L] = i;
			DFS(hs, pz, i+1, L+1);
		}
	}

}

int main()
{
	cin >> N >> M;

	vector<pair<int, int> > hs;
	vector<pair<int, int> > pz;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			int a;
			cin >> a;
			if (a == 1)
			{
				hs.push_back({ i,j });
			}
			else if (a == 2)
			{
				pz.push_back({ i, j });
			}
		}
	}

	DFS(hs, pz, 0, 0);

	cout << res << "\n";

	return 0;
}