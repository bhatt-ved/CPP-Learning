/*
 * A student structure is provided.  Open a file named students.data and populates in-memory structure.
 * A driver function is provided to do some basic operations.
 *
 */

#include <stdio.h>
#include <ctype.h>

struct Student {
	char first_name[16];
	char last_name[16];
	int age;
	float weight;
	float height;
};

static struct Student *student_list = NULL;	// Array of students list; dynamically allocated
static int num_student_records = 0;		// Number of student records

int parse_file()
{
	// Opens a file named students.txt
	// File structure is like following:
	// 	First line is a single integer stating number of records
	// 	Next, each line has first_name, last_name, age, weight, height
	// 	Hint:  use fscand()

	return 0;
}

int print_data()
{
	// Prints details of the students.  Be creative to do 'pretty-print'

	return 0;
}

void print_help()
{
	printf("Available commands:\n");
	printf("\tL: Load file\n");
	printf("\tP: Print students records\n");
	printf("\tH: Print this help message\n");
	printf("\tQ: Quit\n");
	printf("Note: Command can be lower or upper case\n\n");
}


int driver()
{
	char cmd;
	print_help();
	do {
		cmd = getchar();
		cmd = tolower(cmd);
		int retval = 0;

		switch (cmd)
		{
			case 'l':
				retval = parse_file();
				break;
			case 'p':
				retval = print_data();
				break;
			case 'q':
				break;
			case 'h':
			default:
				print_help();
				break;
		}

		if (retval != 0)
			return retval;
	} while (cmd != 'q');

	return 0;
}


int main()
{
	return driver();
}
