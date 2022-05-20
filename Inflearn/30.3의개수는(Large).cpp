#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int num;
	cin >> num;

	int lt = 1, cur, rt, digit = 1, res= 0;

	while (lt != 0)
	{
		lt = num / (digit * 10);
		cur = (num / digit) % 10;
		rt = num % digit;

		if (cur > 3)
		{
			res += (lt + 1) * digit;
		}
		else if (cur < 3)
		{
			res += lt*digit;
		}
		else
			res += lt*digit + (rt + 1);

		digit *= 10;
	}


	cout << res << endl;
	

	return 0;
}