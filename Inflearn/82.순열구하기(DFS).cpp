#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int a[20], ch[20], res[20], cnt = 0;

void DFS(int n, int r, int L)
{
	if (L == r)
	{
		for (int i = 0; i < L; i++)
		{
			cout << res[i] << " ";
		}
		cnt++;
		puts("");
	}
	else {
		for (int i = 0; i < n; i++)
		{
			if (ch[i] == 0)
			{
				res[L] = a[i];
				ch[i] = 1;
				DFS(n, r, L+1);
				ch[i] = 0;
			}
		}

	}
}

int main()
{
	int N, R;

	cin >> N >> R;

	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}

	DFS(N, R, 0);


	cout << cnt << "\n";
	return 0;
}