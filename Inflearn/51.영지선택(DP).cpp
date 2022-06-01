#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int H, W, sizeH, sizeW, tmp, max = -2147000000;

	cin >> H >> W;

	vector<vector<int>> A(H+1,vector<int>(W+1));
	vector<vector<int>> dp(H+1,vector<int>(W+1));
	

	for (int i = 1; i <= H; i++)
	{
		for (int j = 1; j <= W; j++)
		{
			cin >> A[i][j];
			dp[i][j] = dp[i][j - 1] + dp[i - 1][j] - dp[i - 1][j - 1] + A[i][j];
		}
	}

	cin >> sizeH >> sizeW;

	for (int i = sizeH; i <= H; i++)
	{
		for (int j = sizeW; j <= W; j++)
		{
			tmp = dp[i][j] - dp[i - sizeH][j] - dp[i][j - sizeW] + dp[i - sizeH][j - sizeW];
			if (tmp > max) max = tmp;
		}
	}

	cout << max << endl;

	return 0;
}