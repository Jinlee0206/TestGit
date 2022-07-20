#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n, res = 0;
	cin >> n;

	vector<int> dy(n + 1), vec(n + 1);

	for (int i = 1; i <= n; i++)
	{
		int a;
		cin >> a;

		vec[i] = a;
	}

	dy[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		int max = 0;

		for (int j = i - 1; j >= 1; j--)
		{
			if (vec[i] > vec[j] && dy[j] > max) max = dy[j];
		}
		dy[i] = max + 1;

		if (res < dy[i]) res = dy[i];
	}

	cout << res << "\n";

	return 0;
}