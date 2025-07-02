/* This program will crash!!! */
#include <stdlib.h>
#include <iostream>
using namespace std;

#define BUNCH 1024

int main()
{
	char *ptr;
	int n = 0;
	
	while (true)
	{
		ptr  = (char *) malloc(BUNCH);
		cout << "Allocated " << n << " kB" << endl;
		n++;
	}

	return 1;
}

