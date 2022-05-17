#include <iostream>

using namespace std;

int main()
{
	int N, cnt = 0;
	cin >> N;

	bool flag;

	for (int i = 2; i <= N; i++)
	{
		flag = true;

		// �ش� ���� ������ ������ üũ (�������� ��Ī�̹Ƿ� �ݺ��� �ߺ��̴�)
		for (int j = 2; j * j <= i; j++)
		{
			if (i % j == 0)
			{
				flag = false;
				break;
			}
		}
		if (flag == true) cnt++;
	}

	cout << cnt << "\n";
	return 0;
}


// �迭�� �÷��� Ȱ��
/*
int arr[200000];

int main() {
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		for (int j = i; j <= N; j+= i)
		{
			arr[j]++;
		}
	}

	for (int i = 1; i <= N; i++)
	{
		cout << arr[i] << " ";
	}

	int cnt = 0;
	for (int i = 1; i <= N; i++)
	{
		if (arr[i] == 2) cnt++;
	}

	cout << cnt << "\n";
	

	return 0;
}
*/