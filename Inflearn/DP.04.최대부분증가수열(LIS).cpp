#include <iostream>
#include <vector>

using namespace std;

int dy[1001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, max = 0, res = 0;
	cin >> n;

	vector<int> arr(n+1);

	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}

	dy[1] = 1;
	
	for (int i = 2; i <= n; i++)
	{
		max = 0;
		for (int j = 1; j < i; j++)
		{
			if (arr[i] > arr[j] && dy[j] > max) max = dy[j];
		}
		dy[i] = max + 1;

		if (res < dy[i]) res = dy[i];
	}

	cout << res << "\n";


	return 0;
}