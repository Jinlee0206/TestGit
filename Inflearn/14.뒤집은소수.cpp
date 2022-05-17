#include <iostream>

using namespace std;

int reverse(int x)
{
	int res = 0, sum = 0;

	while (x != 0)
	{
		res = x % 10;
		sum = sum*10 + res;
		x /= 10;
	}

	return sum;
}

bool isPrime(int x)
{
	bool flag = true;
	
	if (x == 1) return false; // 1은 예외처리

	for (int i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			flag = false;
			break;
		}
		return flag;
	}
}

//bool isPrime(int x)
//{
//	int cnt = 0;
//
//	for (int i = 1; i <= x; i++)
//	{ 
//		if (x % i == 0) cnt++;
//	}
//
//	if (cnt == 2) return true;
//	else return false;
//}

int main()
{
	int N;
	cin >> N;

	int arr[99] = { 0, };

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < N; i++)
	{
		arr[i] = reverse(arr[i]);
	}

	for (int i = 0; i < N; i++)
	{	
		//cout << arr[i] << "\n";
		
		if (isPrime(arr[i]))
		{
			cout << arr[i] << " ";
		}
	}

	return 0;
}