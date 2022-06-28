#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, res = -2147000000;

void DFS(vector<pair<int, int> > &vec, int L, int sum)
{
	if (L == N + 1)
	{
		if (res < sum) res = sum;
	}
	else
	{
		if (L + vec[L].first <= N + 1) DFS(vec, L + vec[L].first, sum + vec[L].second);
		DFS(vec, L + 1, sum);
	}
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;

	vector<pair<int, int> > vec;

	vec.push_back({ 0,0 });

	for (int i = 0; i < N; i++)
	{
		int a, b;
		cin >> a >> b;
		vec.push_back({ a, b });
	}

	DFS(vec, 1, 0);

	cout << res << "\n";

	return 0;
}