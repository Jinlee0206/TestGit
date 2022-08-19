#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;

	vector<pair<int, int>> vec;

	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		vec.push_back(make_pair(a, b));
	}

	vector<int> dp(m+1, 0);

	for (int i = 0; i < n; i++)
	{
		for (int j = m; j >= vec[i].second; j--)
		{
			dp[j] = max(dp[j], dp[j - vec[i].second] + vec[i].first);
		}
	}

	cout << dp[m] << "\n";

	return 0;
}