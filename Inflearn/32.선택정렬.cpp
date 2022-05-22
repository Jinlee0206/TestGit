#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int a[101];

	int idx;

	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < N - 1; i++)
	{
		idx = i;
		// idx와 j for문 돌면서 나온 최솟값을 i값과 변경
		for (int j = i + 1; j < N; j++)
		{
			if (a[j] < a[idx]) idx = j;
		}
		int tmp;
		tmp = a[i];
		a[i] = a[idx];
		a[idx] = tmp;
	}

	for (int i = 0; i < N; i++)
	{
		cout << a[i] << " ";
	}

	return 0;
}

/*int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<int> a(N);

	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}

	sort(a.begin(), a.end());

	for (int i = 0; i < N; i++)
	{
		cout << a[i] << " ";
	}

	return 0;
}*/