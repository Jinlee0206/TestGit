#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int N, idx = 1;

	cin >> N;

	stack<int> s;
	//vector<int> a(N+1);
	vector<char> vtc;

	/*for (int i = 1; i <= N; i++)
	{
		a[i] = i;
	}*/

	for (int i = 1; i <= N; i++) 
	{
		int num;
		cin >> num;

		s.push(num);
		vtc.push_back('P');

		while (1)
		{
			if (s.empty()) break;
			
			//if (s.top() == a[idx])
			if (s.top() == idx)
			{
				s.pop();
				vtc.push_back('O');
				idx++;
			}
			else break;
		}
	}

	if (!s.empty()) cout << "impossible" << endl;
	else
	{
		for (int i = 0; i < vtc.size() ; i++)
		{
			cout << vtc[i];
		}
	}

	return 0;
}