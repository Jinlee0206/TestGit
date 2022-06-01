#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int main()
{
	int N, K;
	char str[17] = "0123456789ABCDEF";
	cin >> N >> K;

	stack<int> s;

	while (N != 0)
	{
		s.push(N % K);
		N /= K;
	}

	while (!s.empty())
	{
		cout << str[s.top()];
		s.pop();
	}

	return 0;
}