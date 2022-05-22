#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N, tmp;
	cin >> N;

	vector<int> a(N);

	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}

	for (int i = N-1 ; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (a[j + 1] < 0 && a[j] > 0)
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