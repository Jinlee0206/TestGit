#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int a[101];
	int idx, tmp;

	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}

	// [j]�� [j+1]���� ũ�� ��ȯ -> ��������
	// [j+1]�� [j]���� ũ�� ��ȯ -> ��������
	for (int i = N-1; i>0; i--)
	{
		for (int j = 0; j < N - 1; j++)
		{
			if (a[j + 1] < a[j])
			{
				tmp = a[j+1];
				a[j+1] = a[j];
				a[j] = tmp;
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		cout << a[i] << " ";
	}

	return 0;
}