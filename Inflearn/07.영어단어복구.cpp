#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	char N[101], M[101];
	int pos = 0;

	gets_s(N);

	for (int i = 0; N[i] != '\0'; i++)
	{
		if (N[i] != ' ')
		{
			if (N[i] >= 65 && N[i] <= 90)
				M[pos++] = N[i] + 32;
			else
				M[pos++] = N[i];
		}
	}
	M[pos] = '\0';

	printf("%s\n", M);


	return 0;
}

// string Çì´õ STL !!
/* 
int main(int argc, char** argv) {
	string N;
	getline(cin, N);

	N.erase(remove(N.begin(), N.end(), ' '), N.end());

	for (int i = 0; i < N.size(); i++)
	{
		N[i] = tolower(N[i]);
	}

	cout << N << endl;

	return 0;
}
*/