#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int N, M, sum = 0;

	cin >> N >> M;

	for (int i = 1; i <= N; i++)
	{
		if (i % M == 0)
		{
			sum += i;
		}
	}

	cout << sum << endl;

	return 0;
}