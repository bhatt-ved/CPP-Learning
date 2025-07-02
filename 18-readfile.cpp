/* File to read a file!
 */

#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		printf("You must give at least one argument!\n");
		return 1;
	}

	const char *filename = argv[1];
	FILE *fp = fopen(filename, "r");
	char c;

	while ((c = getc(fp)) != EOF) {
		printf("%c", c);
	}

	fclose(fp);

	return 0;
}

