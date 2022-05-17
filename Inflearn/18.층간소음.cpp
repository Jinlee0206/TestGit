#include <iostream>

using namespace std;

int main()
{
	int N, M, maxCnt =0, cnt =0;

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		int sec;
		cin >> sec;

		if (sec > M)
		{
			cnt++;
			if (cnt > maxCnt) maxCnt = cnt;
		}
		else
			cnt = 0;
	}

	if (maxCnt == 0) cout << "-1" << endl;
	else cout << maxCnt << endl;

	return 0;
}