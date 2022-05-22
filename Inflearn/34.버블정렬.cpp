#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int a[101];
	int idx, tmp;

	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}

	// [j]가 [j+1]보다 크면 교환 -> 오름차순
	// [j+1]가 [j]보다 크면 교환 -> 내림차순
	for (int i = N-1; i>0; i--)
	{
		for (int j = 0; j < N - 1; j++)
		{
			if (a[j + 1] < a[j])
			{
				tmp = a[j+1];
				a[j+1] = a[j];
				a[j] = tmp;
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		cout << a[i] << " ";
	}

	return 0;
}