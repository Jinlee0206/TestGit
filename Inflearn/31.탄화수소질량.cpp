#include <iostream>
#include <string>

using namespace std;

int main()
{
	//freopen("input.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	char CH[10];
	cin >> CH;

	int c = 0, h = 0, pos;

	if (CH[1] == 'H')
	{
		c = 1;
		pos = 1;
	}
	else
	{
		int i;
		for (i = 1; CH[i] !=  'H'; i++)
		{
			c = c * 10 + (CH[i] - 48);
		}
		pos = i;
	}
	if (CH[pos + 1] == '\0') h = 1;
	else
	{
		for (int i = pos + 1; CH[i] != '\0'; i++)
		{
			h = h * 10 + (CH[i] - '0');
		}
	}

	cout << c * 12 + h << "\n";

	return 0;
}