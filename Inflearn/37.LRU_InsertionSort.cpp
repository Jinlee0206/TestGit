#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int size, N, tmp;
	cin >> size >> N;

	vector<int> cache(size);

	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		int pos = -1;

		// Cache Miss, Hit 를 판별하는 for 문
		for (int j = 0; j < size; j++)
		{
			if (cache[j] == tmp) pos = j;
		}

		// Cache Miss
		if (pos == -1)
		{
			for (int j = size - 1; j >= 1; j--)
			{
				cache[j] = cache[j-1];
			}
			
		}
		// Cache Hit
		else
		{
			for (int j = pos; j >= 1; j--)
			{
				cache[j] = cache[j - 1];
			}
		}
		cache[0] = tmp;
	}

	for (int i = 0; i < size; i++)
	{
		cout << cache[i] << " ";
	}

	return 0;
}