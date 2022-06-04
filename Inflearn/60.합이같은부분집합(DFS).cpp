#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, ch[11], tot =0;
bool flag = false;

void DFS(int lv, int sum)
{
	if (sum > (tot / 2)) return;

	if (flag == true) return;

	if (lv == N + 1)
	{
		if (sum == (tot - sum))	flag == true;
	}
	else
	{
		DFS(lv + 1, sum+ch[lv]);
		DFS(lv + 1, sum);
	}
}

int main()
{
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		cin >> ch[i];
		tot += ch[i];
	}

	DFS(1, 0);

	if (flag) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}

