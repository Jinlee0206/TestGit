#include <iostream>

using namespace std;

int main()
{
	int N, cnt = 0, maxHeight;
	cin >> N;

	int arr[100] = { 0, };

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	// ������ �� �Ҵ�
	maxHeight = arr[N-1];

	// ������ �� ��° idx �������� ��ȸ
	for (int i = N - 2; i >= 0  ; i--)
	{
		// maxHeight�� ���ŵǸ� ���� idx ��� �� ���� ũ�� --> �г�������
		if (arr[i] > maxHeight)
		{
			maxHeight = arr[i];
			cnt++;
		}
	}

	cout << cnt << endl;

	return 0;
}