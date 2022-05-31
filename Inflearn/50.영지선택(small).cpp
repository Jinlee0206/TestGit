#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int T[100][100];

int main()
{
	int H, W, sizeH, sizeW, sum=0, max = -2147000000;
	cin >> H >> W;

	

	for (int i = 1; i <= H; i++)
	{
		for (int j = 1; j <= W; j++)
		{
			cin >> T[i][j];
		}
	}

	cin >> sizeH >> sizeW;

	for (int i = 1; i <= H-sizeH+1; i++)
	{
		for (int j = 1; j <= W-sizeW+1; j++)
		{
			sum = 0;

			for (int k = 0; k < sizeH; k++)
			{
				for (int l = 0; l < sizeW; l++)
				{
					sum += T[i+k][j+l];
				}
			}

			if (sum > max)
			{
				max = sum;
			}
		}
	}

	cout << max << endl;

	return 0;
}