#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int* arr_A = new int[N];
	int* arr_B = new int[N];

	for (int i = 0; i < N; i++)
	{
		cin >> arr_A[i];
	}

	for (int i = 0; i < N; i++)
	{
		cin >> arr_B[i];
	}

	for (int i = 0; i < N; i++)
	{
		int n = arr_A[i] - arr_B[i];

		switch (n)
		{
		case 0:
			cout << "D ";
			break;

		case 1:
			cout << "A ";
			break;

		case 2:
			cout << "B ";
			break;

		case -1:
			cout << "B ";
			break;

		case -2:
			cout << "A ";
			break;
		}

	}

	delete[] arr_A;
	delete[] arr_B;

	return 0;
}