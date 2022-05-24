#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int a[101], b[101], c[202];
int main(){
	int N, M, p1 = 1, p2 = 1, p3=1;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> a[i];
	}

	cin >> M;
	for (int i = 1; i <= M; i++)
	{
		cin >> b[i];
	}

	while (p1 <= N && p2 <= M)
	{
		if (a[p1] < b[p2])
		{
			c[p3++] = a[p1++];
		}
		else
		{
			c[p3++] = b[p2++];
		}

	}

	while (p1 <= N) c[p3++] = a[p1++];
	while (p2 <= M) c[p3++] = b[p2++];

	for (int i = 1; i < p3; i++)
	{
		cout << c[i] << " ";
	}

	return 0;
}

// STL »ç¿ë
/*int main()
{
	int N, M, K;
	cin >> N;

	vector<int> a(N);

	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}

	cin >> M;
	vector<int> b(M);
	
	for (int i = 0; i < M; i++)
	{
		cin >> b[i];
	}

	K = N + M;

	a.resize(K);

	for (int i = N; i < K; i++)
	{
		a[i] = b[i - N];
	}

	sort(a.begin(), a.end());

	for (int i = 0; i < K; i++)
	{
		cout <<  a[i] << " ";
	}

	return 0;
}
*/