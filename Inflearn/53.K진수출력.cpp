#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int stack[100], top = -1;

void push(int x)
{
	stack[++top] = x;
}

int pop()
{
	return stack[top--];
}

int main()
{
	int N, K;
	char str[17] = "0123456789ABCDEF";
	cin >> N >> K;

	while (N != 0)
	{
		push(N % K);
		N /= K;
	}

	while (top != -1)
	{
		cout << str[pop()];
	}

	return 0;
}