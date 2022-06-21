#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int getParent(int parent[], int x)
{
	if (parent[x] == x) return x;
	// 메모이제이션
	else return parent[x] = getParent(parent, parent[x]);
}

void UnionParent(int parent[], int a, int b)
{
	a = getParent(parent, a);
	b = getParent(parent, b);

	if (a < b) parent[b] = a;
	else parent[a] = b;
}

int findParent(int parent[], int a, int b)
{
	a = getParent(parent, a);
	b = getParent(parent, b);

	if (a == b) return 1;
	else return 0;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	int parent[1001];

	for (int i = 1; i <= N; i++)
	{
		parent[i] = i;
	}

	for (int i = 1; i <= M; i++)
	{
		int a, b;
		cin >> a >> b;
		UnionParent(parent, a, b);
	}

	int x, y;
	cin >> x >> y;

	if (findParent(parent, x, y)) cout << "YES\n";
	else cout << "NO\n";

	return 0;
}