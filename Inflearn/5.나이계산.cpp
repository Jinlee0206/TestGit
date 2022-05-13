#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	//freopen ("input.txt", "rt", stdin);
	string N;
	cin >> N;

	int a; // 나이
	char gen; // 성별 

	int n = N[7] - '0';

	// switch-case 구문
	switch (n)
	{
	case 1:
		a = 119 - ((N[0] - '0') * 10 + (N[1] - '0'));
		gen = 'M';
		break;

	case 2:
		a = 119 - ((N[0] - '0') * 10 + (N[1] - '0'));
		gen = 'W';
		break;

	case 3:
		a = 19 - ((N[0] - '0') * 10 + (N[1] - '0'));
		gen = 'M';
		break;

	case 4:
		a = 19 - ((N[0] - '0') * 10 + (N[1] - '0'));
		gen = 'W';
		break;
	}

	// if-elseif 구문
	/* 
	if ((N[7]-'0') == 1)
	{
		a = 119 - ((N[0] - '0') * 10 + (N[1] - '0'));
		gen = 'M';
	}
	else if ((N[7]-'0') == 2)
	{
		a = 119 - ((N[0] - '0') * 10 + (N[1] - '0'));
		gen = 'W';
	}
	else if ((N[7]-'0') == 3)
	{
		a = 19 - ((N[0] - '0') * 10 + (N[1] - '0'));
		gen = 'M';
	}
	else if ((N[7]-'0') == 4)
	{
		a = 19 - ((N[0] - '0') * 10 + (N[1] - '0'));
		gen = 'W';
	}*/

	cout << a + 1 << " " << gen << endl;

	return 0;
}