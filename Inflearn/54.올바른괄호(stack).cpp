#include <iostream>
#include <stack>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	string str;
	cin >> str;

	stack<char> s;
	bool isCorrect = true;

	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == '(') s.push(str[i]);
		else {
			if (s.empty())
			{
				cout << "NO" << endl;
				isCorrect = false;
				break;
			}
			else s.pop();
		}
	}

	if (s.empty() && isCorrect == true) cout << "YES" << endl;
	else if(!s.empty() &&isCorrect == true)cout << "NO" << endl;

	return 0;
}

/*
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
}*/