#include <iostream>

using namespace std;

int dy[50];

int DFS(int n)
{
	if (dy[n] != 0) return dy[n];
	if (n == 1 || n == 2) return n;
	else return dy[n] = DFS(n - 2) + DFS(n - 1);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	cout << DFS(n) << "\n";


	return 0;
}