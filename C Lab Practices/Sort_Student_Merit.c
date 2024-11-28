#include <stdio.h>
#include <string.h>

// Define a structure for student information
struct Student {
    char name[50];
    int id;
    float cgpa;
};

// Function to sort students by merit (CGPA) in descending order
void sortByMerit(struct Student students[], int n) {
    struct Student temp;
    for (int i = 0; i < n ; i++) {
        for (int j = i+1; j < n-1; j++) {
            if (students[i].cgpa >  students[j].cgpa) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

int main() {
    int n;

    // Input the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Input student information
    printf("Enter student information:\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name); // Input name with spaces
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("CGPA: ");
        scanf("%f", &students[i].cgpa);
    }

    // Sort students by merit
    sortByMerit(students, n);

    // Display sorted student information
    printf("\nStudent information sorted by merit (CGPA):\n");
    printf("Rank\tName\t\tID\tCGPA\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%s\t%d\t%.2f\n", i + 1, students[i].name, students[i].id, students[i].cgpa);
    }

    return 0;
}
