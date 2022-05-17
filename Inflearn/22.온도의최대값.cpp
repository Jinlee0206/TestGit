#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, K, sum = 0, max;

	cin >> N >> K;

	vector<int> a(N);

	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}

	// ù ��° K ���� �������� ��
	for (int i = 0; i < K; i++)
	{
		sum += a[i];
	}

	max = sum;

	// ���� �� ++, �� ���� -- �� ���� �ð����⵵ N ���� max �� ���� �� �ִ�
	for (int i = K; i < N; i++)
	{
		sum += a[i] - a[i - K];
		if (sum > max) max = sum;
	}

	cout << max << endl;


	return 0;
}

/*
int main()
{
	int N, K, max = -2147000000, res = 0;
	
	cin >> N >> K;

	for (int i = 0; i < N; i++)
	{
		cin >> arr_N[i];
	}

	for (int i = 0; i < N - K + 1; i++)
	{
		res = 0;
		for (int j = i; j < i+K; j++)
		{
			res += arr_N[j];
		}
		

		if (res > max) max = res;
	}

	cout << max << endl;

	return 0;
}
*/