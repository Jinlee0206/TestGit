#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 소인수분해 응용
// 소수를 카운팅 하는 배열을 따로 만들 필요가 없다
int main()
{
	int N;
	cin >> N;

	// 벡터는 선언과 동시에 0으로 초기화 된다
	vector<int> cnt(N+1);

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

	cout << N << "! = ";

	for (int i = 2; i <= N; i++)
	{
		if (cnt[i] != 0) cout << cnt[i] << " ";
	}

	return 0;
}