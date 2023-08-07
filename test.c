#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

struct Student {
	int id;
	char name[50];
	int age;
};

void addStudent(struct Student students[], int* count) {
	if (*count < MAX_STUDENTS) {
		struct Student newStudent;
		printf("Enter student ID: ");
		scanf("%d", &newStudent.id);
		printf("Enter student name: ");
		scanf("%s", newStudent.name);
		printf("Enter student age: ");
		scanf("%d", &newStudent.age);

		students[*count] = newStudent;
		(*count)++;
		printf("Student added successfully.\n");
	} else {
		printf("No more space for students.\n");
	}
}

void removeStudent(struct Student students[], int* count, int studentId) {
	int i, found = 0;
	for (i = 0; i < *count; i++) {
		if (students[i].id == studentId) {
			found = 1;
			break;
		}
	}

	if (found) {
		for (; i < *count - 1; i++) {
			students[i] = students[i + 1];
		}
		(*count)--;
		printf("Student removed successfully.\n");
	} else {
		printf("Student not found.\n");
	}
}

void updateStudent(struct Student students[], int count, int studentId) {
	int i, found = 0;
	for (i = 0; i < count; i++) {
		if (students[i].id == studentId) {
			found = 1;
			break;
		}
	}

	if (found) {
		printf("Enter new student name: ");
		scanf("%s", students[i].name);
		printf("Enter new student age: ");
		scanf("%d", &students[i].age);
		printf("Student updated successfully.\n");
	} else {
		printf("Student not found.\n");
	}
}

void searchStudent(struct Student students[], int count, int studentId) {
	int i, found = 0;
	for (i = 0; i < count; i++) {
		if (students[i].id == studentId) {
			found = 1;
			break;
		}
	}

	if (found) {
		printf("Student Found:\n");
		printf("ID: %d\n", students[i].id);
		printf("Name: %s\n", students[i].name);
		printf("Age: %d\n", students[i].age);
	} else {
		printf("Student not found.\n");
	}
}

int main() {
	struct Student students[MAX_STUDENTS];
	int count = 0;
	int choice, studentId;

	do {
		printf("\nMenu:\n");
		printf("1. Add student\n");
		printf("2. Remove student\n");
		printf("3. Update student\n");
		printf("4. Search student\n");
		printf("0. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			addStudent(students, &count);
			break;
		case 2:
			printf("Enter student ID to remove: ");
			scanf("%d", &studentId);
			removeStudent(students, &count, studentId);
			break;
		case 3:
			printf("Enter student ID to update: ");
			scanf("%d", &studentId);
			updateStudent(students, count, studentId);
			break;
		case 4:
			printf("Enter student ID to search: ");
			scanf("%d", &studentId);
			searchStudent(students, count, studentId);
			break;
		case 0:
			printf("Exiting...\n");
			break;
		default:
			printf("Invalid choice, please try again.\n");
			break;
		}
	} while (choice != 0);

	return 0;
}
