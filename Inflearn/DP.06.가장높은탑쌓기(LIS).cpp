#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Data
{
	int area;
	int height;
	int weight;

	Data(int a, int b, int c)
	{
		area = a;
		height = b;
		weight = c;
	}

	bool operator<(const Data& b) const
	{
		return area < b.area;
	}
};

int main()
{
	int n, res = 0;
	cin >> n;

	vector<Data> vec;
	vector<int> dy(n+1, 0);

	for (int i = 0; i < n; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		vec.push_back(Data(a, b, c));
	}

	sort(vec.begin(), vec.end());

	dy[0] = vec[0].height;
	res = dy[0];
	for (int i = 1; i < n; i++)
	{
		int max_h = 0;

		for (int j = i - 1; j >= 0; j--)
		{
			if (vec[j].weight < vec[i].weight && dy[j] > max_h)
			{
				max_h = dy[j];
			}
		}

		dy[i] = max_h + vec[i].height;
		res = max(res, dy[i]);
	}

	cout << res << "\n";

	//for (int i = 0; i < n; i++)
	//{
	//	cout << dy[i] << " ";
	//}


	return 0;
}