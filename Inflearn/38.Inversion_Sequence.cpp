#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<int> IS(N);
	vector<int> a(N);

	for (int i = 0; i < N; i++) {
		cin >> IS[i];
	}

	for (int i = N - 1; i >= 0; i--)
	{
		int idx = IS[i];

		for (int j = N-1 ; j > idx; j--)
		{
			a[j] = a [j - 1];
		}

		a[idx] = i + 1;
	}

	for (int i = 0; i < N; i++)
	{
		cout << a[i] << " ";
	}

	return 0;
}