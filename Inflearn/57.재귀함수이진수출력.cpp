#include <iostream>

using namespace std;

void Binary(int x)
{
	if (x == 0) return;
	else {
		Binary(x / 2);
		cout << x % 2;
	}
}

int main()
{
	int N;

	cin >> N;

	Binary(N);

	return 0;

}