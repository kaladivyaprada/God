#include <stdio.h>
#include <stdlib.h>

  struct Student {
    char name[50];
    float marks;
};

int main() {
    int num_students, i;
    float total_marks = 0.0;


    printf("Enter the number of students: ");
    scanf("%d", &num_students);


    if (num_students <= 0) {
        printf("Number of students must be a positive integer.\n");
        return 1;
    }

    struct Student students[num_students];


    for (i = 0; i < num_students; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &students[i].marks);
        total_marks += students[i].marks;
    }


    printf("The total sum of marks is: %.2f\n", total_marks);

    return 0;
}
