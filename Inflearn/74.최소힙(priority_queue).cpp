#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
	priority_queue<int> pQ;

	while (true)
	{
		int a;
		cin >> a;

		if (a == -1) break;

		if (a == 0) {
			if (pQ.empty()) cout << "-1" << endl;
			else {
				cout << -pQ.top() << endl;
				pQ.pop();
			}
		}
		else pQ.push(-a);
	}

	return 0;
}