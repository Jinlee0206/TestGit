#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;

	int cnt = 0;

	for (int i = 1; i <= N; i++)
	{
		int tmp = i;
		while (tmp > 0)
		{
			tmp /= 10;
			cnt++;
		}
	}

	cout << cnt << endl;

	return 0;
}