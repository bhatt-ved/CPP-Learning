/* Playing with dynamic memory allocation.
 *
 * Repeat the problem statement from "struct.cpp", and instead of 4 fixed
 * size of students, prompt user to provide the size of student population;
 * dynamically allocate memory for required size and repeat the program.
 *
 * Redo the same program using C-style memory allocation and C++ style memory allocation.
 *
 * Do not forget to free the memory you allocated!
 *
 */


#include <iostream>

using namespace std;

int main()
{
	struct Student {
		char first_name[64];
		char last_name[64];
		int age;
		float weight;
		float height;
	};
	
	int num_students;
	
	cout << "How many students are there? > ";
	cin >> num_students;
	
	struct Student *students;
	struct Student *tempPointer;

	students = (struct Student*) malloc(sizeof(struct Student)*num_students);

	float avg_age, avg_height, avg_weight;

	for (int i = 0; i < num_students; i++) {
		cout << "What is your first name? > ";
		cin >> students->first_name;

		cout << "What is your last name? > ";
		cin >> students->last_name;

		cout << "What is your age? > ";
		cin >> students->age;
		avg_age += students->age;

		cout << "What is your weight(in kgs)? > ";
		cin >> students->weight;
		avg_weight += students->weight;

		cout << "What is your height(in cm)? > ";
		cin >> students->height;
		avg_height += students->height;
	
		students++;
	}
	
	avg_age /= num_students;
	avg_weight /= num_students;
	avg_height /= num_students;
	
	cout << "Average age is " << avg_age << " years old. Average weight is " << avg_weight << "kgs. Average height is " << avg_height << "cm.\n";
	
	free(tempPointer);

	return 0;

}
	
