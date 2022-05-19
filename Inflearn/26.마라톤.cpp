#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<int> velocity(N);
	vector<int> grade(N);

	for (int i = 0; i < N; i++)
	{
		cin >> velocity[i];
		grade[i] = 1;
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (velocity[j] >= velocity[i]) grade[i]++; // 나와 같은 속도도 제칠 수 없다
		}
	}

	for (int i = 0; i < N; i++)
	{
		cout << grade[i] << " ";
	}


	return 0;
}