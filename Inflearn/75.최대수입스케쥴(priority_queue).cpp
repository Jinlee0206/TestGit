#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

struct Data
{
	int money;
	int when;

	Data(int a, int b)
	{
		money = a;
		when = b;
	}

	bool operator<(const Data& b) const {
		return when > b.when;
	}
};

int main()
{
	vector<Data> v;
	priority_queue<int> pQ;

	int N, max = -2147000000, res = 0;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int a, b;
		cin >> a >> b;
		v.push_back(Data(a,b));

		if (b > max)
		{
			max = b;
		}
	}
	sort(v.begin(), v.end());

	int j = 0;

	for (int i = max; i >= 1; i--)
	{
		for ( ; j < N; j++)
		{
			if (v[j].when < i) break;
			pQ.push(v[j].money);
		}

		if (!pQ.empty())
		{
			res += pQ.top();
			pQ.pop();
		}
	}

	cout << res << "\n";
	return 0;

}