#include <iostream>

using namespace std;

// 제한시간 1초

int main()
{
	int N;
	cin >> N;

	int cnt[50001] = { 0, };

	for (int i = 1; i <= N; i++)
	{
		for (int j = i; j <= N; j += i)
		{
			cnt[j]++;
		}
	}

	for (int i = 1; i <= N; i++)
	{
		cout<< cnt[i] << " ";
	}

	return 0;
}
/*
int main()
{
	//freopen("input.txt", "rt", stdin);
	int N, cnt;
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		cnt = 0;

		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0) cnt++;
		}

		cout << cnt << " ";
	}

	return 0;
}
*/