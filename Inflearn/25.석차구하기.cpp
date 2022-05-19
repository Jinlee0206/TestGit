#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// ���Ʈ ���� (���� for������ �� idx ��� ��)
int main()
{
	int N;
	cin >> N;

	vector<int> score(N);
	vector<int> grade(N);

	for (int i = 0; i < N; i++)
	{
		cin >> score[i];
		grade[i] = 1;

	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (score[j] > score[i])
			{
				grade[i]++;
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		cout <<grade[i] << " ";
	}


	return 0;
}