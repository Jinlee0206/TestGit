#include <iostream>

using namespace std;

int main()
{
	int A[10], B[10];
	int score_A=0 , score_B=0;

	// int �� lastWin ������ �����ؼ� ������ ���ڸ� Ȯ���ϴ� ����� �ִ�.  
	//int lastWin = 0;

	for (int i = 0; i < 10; i++)
	{
		cin >> A[i];
	}

	for (int i = 0; i < 10; i++)
	{
		cin >> B[i];
	}

	for (int i = 0; i < 10; i++)
	{
		if (A[i] == B[i])
		{
			score_A++;
			score_B++;
		}

		else if (A[i] > B[i]) score_A += 3;
		else score_B += 3;
	}

	cout << score_A << " " << score_B << endl;

	if (score_A == score_B)
	{
		int i;

		for (i = 9; i >= 0; i--)
		{
			if (A[i] != B[i]) break;
		}

		if (A[i] == B[i]) cout << "D";
		else if (A[i] > B[i]) cout << "A";
		else cout << "B";
	}
	else if (score_A > score_B) cout << "A";
	else cout << "B";

	return 0;
}