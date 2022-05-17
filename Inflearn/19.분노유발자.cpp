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

	// 마지막 값 할당
	maxHeight = arr[N-1];

	// 끝에서 두 번째 idx 에서부터 순회
	for (int i = N - 2; i >= 0  ; i--)
	{
		// maxHeight이 갱신되면 뒤쪽 idx 모든 수 보다 크다 --> 분노유발자
		if (arr[i] > maxHeight)
		{
			maxHeight = arr[i];
			cnt++;
		}
	}

	cout << cnt << endl;

	return 0;
}