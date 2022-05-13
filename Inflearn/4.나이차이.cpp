#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char** argv) {
	//freopen ("input.txt", "rt", stdin);
	int N;
	cin >> N;

	int arr[99] = { 0, };

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + N);

	cout << arr[N - 1] - arr[0] << endl;

	return 0;
}

/* 
int main(){
	int N;
	cin >>N;

	int a, max = -2147000000; min = 2147000000;

	for(int i = 0; i<N; i++){
		cin >> a;
		if(a > max) max = a;
		if(a < min) min = a;
	}

	cout << max - min << endl;
}
*/