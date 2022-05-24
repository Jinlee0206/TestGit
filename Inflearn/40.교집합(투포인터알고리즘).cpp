#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M, p1 = 0, p2= 0, p3 = 0;
	cin >> N;

	vector<int> A(N);
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}

	cin >> M;
	vector<int> B(M);
	for (int i = 0; i < M; i++)
	{
		cin >> B[i];
	}

	sort(A.begin(), A.end());
	sort(B.begin(), B.end());

	vector<int> C(N+M);
	
	// 이중 for문 => 시간복잡도 n^2

	/*int idx = 0;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (A[i] == B[j])
			{
				C[idx++] = A[i];
			}
		}
	}

	for (int i = 0; i < idx; i++)
	{
		cout << C[i] << " ";
	}*/

	while (p1 < N && p2 < M)
	{
		if (A[p1] < B[p2]) p1++;
		else if (A[p1] == B[p2])
		{
			C[p3++] = A[p1++];
			p2++;
		}
		else p2++;
	}

	for (int i = 0; i < p3; i++)
	{
		cout << C[i] << " ";
	}

	return 0;
}