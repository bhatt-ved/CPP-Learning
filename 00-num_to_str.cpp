#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int i;
	char num[64];

	cout << "Enter a number: > ";

	cin >> i;

	if (i == 0) {
		strcpy(num, "zero");
	} else {
		strcpy(num, "non-zero number");
	}

	cout <<  num << "\n";

	return 0;
}

