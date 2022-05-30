#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N, K, pos = 0, cnt = 0, tot = 0;
	cin >> N;

	vector<int> A(N + 1);

	for (int i = 1; i <= N; i++)
	{
		cin >> A[i];
		tot += A[i];
	}

	cin >> K;

	if (K >= tot)
	{
		cout << "-1" << endl;
		return 0;
	}

	while (1)
	{
		pos++;
		if (pos > N) pos = 1;

		if (A[pos] != 0)
		{
			A[pos]--;
			cnt++;
		}

		if (cnt == K) break;
	}

	// ���� ���Ŀ� �ѹ� �� ���ƾ� �� 
	// �� �� �� ������ pos�� 0�̾ƴϸ� �� ���� ��� => pos
	while (1)
	{
		pos++;
		if (pos > N) pos = 1;

		if (A[pos] != 0) break;
	}

	cout << pos << endl;

	return 0;
}