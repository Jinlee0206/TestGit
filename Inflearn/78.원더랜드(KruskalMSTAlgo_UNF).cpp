#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Data {
	int v1;
	int v2;
	int val;

	Data(int a, int b, int c)
	{
		v1 = a;
		v2 = b;
		val = c;
	}

	// 오름차순 리턴
	bool operator<(const Data& b) const {
		return val < b.val;
	}
};

// 호출 함수 안에서 vector 값을 변경하고 싶을 경우 
// vector를 값에 의한 호출(call by value)이 아닌 참조(call by reference)에 의한 호출로 이용하여야 한다
int getParent(vector<int> &parent, int v)
{
	if (v == parent[v]) return v;
	else return parent[v] = getParent(parent, parent[v]);
}

void UnionParent(vector<int> &parent, int a, int b) {
	a = getParent(parent, a);
	b = getParent(parent, b);

	if (a < b) parent[b] = a;
	else parent[a] = b;
}

int findParent(vector<int> &parent, int a, int b)
{
	a = getParent(parent, a);
	b = getParent(parent, b);

	if (a == b) return 1;
	else return 0;
}

int main()
{
	int V, E, res = 0, cnt = 0;
	cin >> V >> E;

	vector<int> parent(V+1);
	vector<Data> data;

	for (int i = 1; i <= V; i++)
	{
		parent[i] = i;
	}

	for (int i = 1; i <= E; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		data.push_back(Data(a, b, c));
	}

	sort(data.begin(), data.end());

	for (int i = 0; i < E; i++)
	{
		if (!findParent(parent, data[i].v1, data[i].v2))
		{
			res += data[i].val;
			UnionParent(parent, data[i].v1, data[i].v2);
		}
	}

	cout << res << "\n";

	return 0;
}