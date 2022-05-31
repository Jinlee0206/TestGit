#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int A[9][9];
int B[9];
int C[9];

int main()
{
	float avg = 0, diff = 0, min = 21470000000;
	int idx = 0;
	
	for (int i = 0; i < 9; i++)
	{
		avg = 0;

		for (int j = 0; j < 9; j++)
		{
			cin >> A[i][j];
			avg += A[i][j];
		}
		B[i] = roundf(avg / 9);
	}

	for (int i = 0; i < 9; i++)
	{
		diff = 0;
		min = 2147000000;
		idx = 0;
		for (int j = 0; j < 9; j++)
		{
			diff = abs(B[i] - A[i][j]);
			if (min > diff)
			{
				min = diff;
				idx = j;
			}
			else if (min == diff)
			{
				if (A[i][idx] < A[i][j]) idx = j;
			}
		}
		C[i] = A[i][idx];
	}

	for (int i = 0; i < 9; i++)
	{
		cout << B[i] << " " << C[i] << endl;
	}


	return 0;
}