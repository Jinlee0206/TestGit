#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	//freopen ("input.txt", "rt", stdin);
	string N;
	cin >> N;
	
	int res = 0, cnt = 0;
	
	for (int i =0; i<N.size(); i++)
	{
		if (N[i] >= '0' && N[i] <= '9')
		{
			res = res * 10 + (N[i] - '0');
		}
	}
	
	cout << res << endl;
	
	for (int i=1; i<=res; i++)
	{
		if(res%i == 0)
			cnt++;
	}
	
	cout << cnt << endl;

	return 0;
}