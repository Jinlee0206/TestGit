#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

// map -> RBT based STL
void Character()
{
	cout << "Insert character : ";

	string str;
	cin >> str;
	map<char, int> ch;
	map<char, int>::iterator it;

	for (int i = 0; i < str.size(); i++)
	{
		ch[str[i]]++;
	}

	for (it = ch.begin(); it != ch.end(); it++)
	{
		cout << it->first << " " << it->second << "\n";
	}
}

void Voca()
{
	
	map<string, int> m_str;
	map<string, int>::iterator it;

	cout << "input numbers : ";
	int n;
	cin >> n;

	string str;

	for (int i = 0; i < n; i++)
	{
		cin >> str;
		m_str[str]++;
	}

	int max = 0;
	string res;

	for (it = m_str.begin(); it != m_str.end(); it++)
	{
		if (max < it->second)
		{
			max = it->second;
			res = it->first;
		}
	}

	cout << res << " : " << max << "\n";

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cout << "Input : ";

	int a;
	cin >> a;

	switch (a)
	{
	case 1:
		Character();
	case 2:
		Voca();
	}

	

	return 0;
}