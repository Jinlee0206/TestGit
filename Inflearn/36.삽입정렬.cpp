#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int a[100];

	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}

	for (int i = 1; i < N; i++)
	{
		int j, tmp; 

		tmp = a[i];
		for (j = i - 1; j >= 0; j--)
		{
			if (a[j] > tmp) a[j + 1] = a[j];
			else break;
		}
		a[j + 1] = tmp;
	}

	for (int i = 0; i < N; i++)
	{
		cout << a[i] << " ";
	}

	return 0;
}