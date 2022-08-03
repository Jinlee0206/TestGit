#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> vec(n);

	for (int i = 0; i < n; i++)
	{
		cin >> vec[i];
	}

	int m;
	cin >> m;
	vector<int> dp(m + 1, 1000);

	dp[0] = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = vec[i]; j <= m; j++)
		{
			dp[j] = min(dp[j], dp[j - vec[i]] + 1);
		}
	}

	cout << dp[m] << "\n";


	return 0;
}