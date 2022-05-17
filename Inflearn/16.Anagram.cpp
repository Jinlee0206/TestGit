#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int x[52], y[52];

int main()
{
	string a, b;
	cin >> a >> b;


	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] >= 97)	x[a[i]- 71]++;
		else x[a[i]- 65]++;
	}

	for (int i = 0; i < b.length(); i++)
	{
		if (b[i] >= 97)	y[b[i] - 71]++;
		else y[b[i] - 65]++;
	}

	for (int i = 0; i < 52; i++)
	{
		if (x[i] != y[i])
		{
			cout << "NO" << endl;
			exit(0);
		}
	}

	cout << "YES" << endl;

	return 0;
}