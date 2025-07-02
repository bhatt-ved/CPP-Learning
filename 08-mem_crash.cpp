/* This program will crash!!! */
#include <stdlib.h>

int main()
{
	char *ptr = (char *) malloc(1000);  // Allocate 1000 bytes
	ptr += 100;
	free(ptr);

	return 1;
}

