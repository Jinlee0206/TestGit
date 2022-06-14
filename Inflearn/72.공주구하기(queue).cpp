#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
	int N, K, x = 0;

	cin >> N >> K;

	queue<int> q;

	for (int i = 1; i <= N; i++)
	{
		q.push(i);
	}

	while (!q.empty())
	{

		for (int i = 1; i < K; i++)
		{
			x = q.front();
			q.push(x);
			q.pop();
		}
		q.pop();
	}
	
	cout << x << endl;


	return 0;


}