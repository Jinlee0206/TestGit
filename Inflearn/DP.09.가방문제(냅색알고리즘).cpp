#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Data
{
	int weight;
	int value;

	Data(int x, int y)
	{
		weight = x;
		value = y;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;

	vector<Data> vec;
	vector<int> dp(m+1, 0);

	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		
		vec.push_back(Data(a, b));
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = vec[i].weight; j <= m; j++)
		{
			dp[j] = max(dp[j],dp[j - vec[i].weight] + vec[i].value);
		}
	}

	cout << dp[m] << "\n";

	return 0;
}