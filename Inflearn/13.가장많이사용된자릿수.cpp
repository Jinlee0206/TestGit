#include <iostream>
#include <string>

using namespace std;

int main() {
	string num;
	int res = 0;
	cin >> num;

	int arr_Idx[10] = { 0, };
	int max = 0, maxIdx = 0;

	for (int i = 0; i < num.size(); i++)
	{
		res = num[i] - '0';
		arr_Idx[res]++;
	}

	for (int i = 0; i < 10; i++)
	{
		if (max <= arr_Idx[i])
		{
			max = arr_Idx[i];
			maxIdx = i;
		}
	}

	cout << maxIdx << endl;

	return 0;
}