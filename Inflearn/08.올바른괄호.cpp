#include <iostream>
#include <string>

using namespace std;

int main()
{
	//freopen("input.txt", "rt", stdin);
	int idx = 0;
	string N;
	cin >> N;

	for (int i = 0; i < N.size(); i++)
	{
		if (N[i] == '(')	idx++;
		else idx--;
		// if(idx<0) break; // ')' 가 더 많을 때는 for문 종료
	}

	if (N[0] != ')' && N.back() != '(' && idx == 0)
		cout << "YES" << "\n";
	else
		cout << "NO" << "\n";

	return 0;
}