#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<int> score(N);
	vector<int> grade(N);

	for (int i = 0; i < N; i++)
	{
		cin >> score[i];
		grade[i] = 0;
	}

	sort(score.begin(), score.end());

	int idx = 1;
	int max = 2147000000;

	for (int i = score.size()-1; i >= 0; i--)
	{

		if (score[i] < max)
		{
			max = score[i];
			grade[i] = idx;
			idx++;
		}
		else
		{
			grade[i] = idx - 1;
		}
	}

	/*for (int i = score.size() - 1; i >= 0; i--)
	{
		cout << grade[i] << " ";
	}*/

	int thirdPlace = 0;
	for (int i = grade.size()-1; i >= 0; i--)
	{
		if (grade[i] == 3)
		{
			thirdPlace = i;
			break;
		}
	}

	cout << score[thirdPlace] << endl;


	return 0;
}