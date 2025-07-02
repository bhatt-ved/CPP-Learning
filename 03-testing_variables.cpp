#include <iostream>

using namespace std;

int main()
{
	char name[12];
	cout << "What is your name? > ";
	cin >> name;
	cout << "Hello " << name << "\n\a";

	for (int i = 0; i < 10; i++) {
		cout << "Did you hear that?\n\a";
		//cin >> name;
	}

	return 0;
}




