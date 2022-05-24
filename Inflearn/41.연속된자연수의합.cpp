#include <iostream>

using namespace std;

int main()
{
	int N, standard= 1, tmp, cnt = 0;

	cin >> N;

	tmp = N;

	for (int i = 2; tmp-standard > 0; i++)
	{
		standard += i;
		if ((tmp - standard) % i == 0)
		{
			int j;

			for (j = 1; j < i; j++)
			{
				cout << (tmp - standard) / i + j << " + ";
			}
			cout << (tmp - standard) / i + j << " = " << N << endl;
			cnt++;
		}
	}

	cout << cnt << endl;
	

	return 0;
}