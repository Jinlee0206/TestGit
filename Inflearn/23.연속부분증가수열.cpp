#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, max = 0, cnt = 1, maxcnt = 0;
	cin >> N;

	vector<int> a(N);

	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < N - 1; i++)
	{
		if (a[i + 1] >= a[i])
		{
			cnt++;

			if (cnt > maxcnt) maxcnt = cnt;
		}
		else cnt = 1;
	}

	cout << maxcnt << endl;

	return 0;
}
