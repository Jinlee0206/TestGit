#include <iostream>
#include <vector>
#include <algorithm>

#include <queue>

using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;

	queue<int> q;

	for (int i = 1; i <= N; i++)
	{
		q.push(i);
	}

	// N번 반복
	for(int i = N; i>1; i--)
	{
		// K-1 번 반복
		for (int j = 1; j < K; j++)
		{
			q.push(q.front());
			q.pop();
		}
		q.pop();

	}

	cout << q.front();

	return 0;
}


// vector의 Index 이용
/*
int main()
{
	int N, K, pos = 0, bp = 0, cnt = 0;
	cin >> N >> K;

	vector<int> prince(N + 1);

	while (1)
	{
		pos++;
		if (pos > N) pos = 1;
		if (prince[pos] == 0)
		{
			cnt++;
			if (cnt == K)
			{
				prince[pos] = 1;
				cnt = 0;
				bp++;
			}
		}
		if (bp == N - 1) break;
	}

	for(int i = 1; i<=N; i++)
	{
		if(prince[i] == 0)
		{
			cout << i;
			break;
		}
	}

	return 0;
}
*/