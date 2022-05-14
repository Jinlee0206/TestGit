#include <iostream>

using namespace std;

int digit_sum(int x)
{
	int sum = 0;

	while (x != 0)
	{
		sum += x % 10;
		x /= 10;
	}
	return sum;
}
int main()
{
	int N;
	cin >> N;

	int arr[100] = { 0 , };
	int max = -2147000000, maxIdx = 0;

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < N; i++)
	{
		int cur = digit_sum(arr[i]);
		if (cur > max)
		{
			max = cur;
			maxIdx = i;
		}
		else if (cur == max)
		{
			if (arr[i] > arr[maxIdx])
			{
				maxIdx = i;
			} 
		}
	}

	cout << arr[maxIdx] << "\n";

	return 0;
}