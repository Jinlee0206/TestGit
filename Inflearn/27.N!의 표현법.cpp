#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// ���μ����� ����
// �Ҽ��� ī���� �ϴ� �迭�� ���� ���� �ʿ䰡 ����
int main()
{
	int N;
	cin >> N;

	// ���ʹ� ����� ���ÿ� 0���� �ʱ�ȭ �ȴ�
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