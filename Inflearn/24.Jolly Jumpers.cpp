#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int a[100] = { 0 , }, b[99] = { 0, };

	bool isJJ = false;

	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < N - 1; i++)
	{
		a[i] =  abs(a[i + 1] - a[i]);
	}

	sort(a, a + N - 1);

	
	for (int i = 0; i < N - 1; i++)
	{
		b[i] = i + 1;
	}

	for (int i = 0; i < N - 1; i++)
	{
		if (a[i] != b[i])
		{
			isJJ = false;
			break;
		}
		else isJJ = true;
	}

	if (isJJ) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}