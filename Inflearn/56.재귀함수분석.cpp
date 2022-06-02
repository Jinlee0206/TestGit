#include <iostream>

using namespace std;

int recur(int x)
{
	if (x == 0) return 0;
	else 
	{
		recur(x - 1);
		cout << x << " ";
	}
}

int main()
{
	int N;
	cin >> N;

	recur(3);

	return 0;
}