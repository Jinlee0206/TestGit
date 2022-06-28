#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, oper[4], ch[20], m_max = -2147000000, m_min = 2147000000;

void DFS(vector<int> &vec, int L, int res)
{
	if (L == N)
	{
		if (m_min > res) m_min = res;
		if (m_max < res) m_max = res;
	}
	else
	{
		if (oper[0] > 0)
		{
			oper[0]--;
			DFS(vec, L + 1, res + vec[L]);
			oper[0]++;
		}

		if (oper[1] > 0)
		{
			oper[1]--;
			DFS(vec, L + 1, res - vec[L]);
			oper[1]++;
		}

		if (oper[2] > 0)
		{
			oper[2]--;
			DFS(vec, L + 1, res * vec[L]);
			oper[2]++;
		}

		if (oper[3] > 0)
		{
			oper[3]--;
			DFS(vec, L + 1, res / vec[L]);
			oper[3]++;
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;

	vector<int> v;

	for (int i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		v.push_back(a);
	}

	for (int i = 0; i < 4; i++)
	{
		cin >> oper[i];
	}

	DFS(v, 1, v[0]);

	cout << m_max << "\n" << m_min << "\n";

	return 0;
}