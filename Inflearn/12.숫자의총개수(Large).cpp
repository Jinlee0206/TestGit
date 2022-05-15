#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int idx = 1, sum = 0, c= 1, d=9, res = 0;

	while (sum + d < N)
	{
		res = res + (c * d);
		sum += d;
		c++;
		d *= 10;
	}

	res = res + ((N - sum) * c);

	cout << res << endl;

	return 0;

}