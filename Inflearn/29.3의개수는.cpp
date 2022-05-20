#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int num;
	cin >> num;

	int cnt=0, digit;

	for (int i = 1; i <= num; i++)
	{
		int temp = i;
		
		while (temp != 0)
		{
			digit = temp % 10;
			if (digit == 3) cnt++;
			temp /= 10;
		}
	}

	cout << cnt << endl;

	return 0;
}