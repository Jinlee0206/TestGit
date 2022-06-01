#include <iostream>
#include <stack>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	string s;
	cin >> s;

	stack<int> stk;

	for (int i = 0; i < s.size(); i++)
	{
		 stk.push(s[i]);
	}

	int idx = 0;

	while (!stk.empty())
	{
		if (stk.top() == ')') idx++;
		else idx--;

		stk.pop();

		if (idx < 0) break;
	}

	if (idx == 0)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	
	return 0;
}