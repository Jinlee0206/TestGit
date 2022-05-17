#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N;
	cin >> N;

	//string* arr = new string[N];

	for (int i = 0; i < N; i++)
	{
		int num = 0, ans = 0, sum = 0;
		cin >> num >> ans;

		for (int j = 1; j <= num; j++)
		{
			sum += j;
		}

		if (sum != ans) cout << "NO\n";
		else cout << "YES\n";
	}

	/*for (int i = 0; i < N; i++)
	{
		cout <<	arr[i] << endl;
	}*/
	
	return 0;
}