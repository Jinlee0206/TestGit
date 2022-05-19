#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<int> cnt(N + 1);

	for (int i = 2; i <= N; i++)
	{
		int tmp = i;
		int j = 2;

		while (1)
		{
			if (tmp % j == 0)
			{
				cnt[j]++;
				tmp /= j;
			}
			else j++;

			if (tmp == 1) break;
		}
	}

	int cnt_two, cnt_five, cnt_zero = 0;

	if (cnt[2] > cnt[5]) cnt_zero = cnt[5];
	else cnt_zero = cnt[2];

	cout << cnt_zero << endl;

	return 0;
}
