#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int N, M, sum = 0;

	cin >> N >> M;

	for (int i = N; i <= M; i++)
	{
		if (i == M)
			cout << i;

		else
			cout << i << "+ ";

		sum += i;
	}

	cout << "=" << sum << endl;

	return 0;
}