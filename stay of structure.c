/*developprogram to store and display basic student detailand
 their marks and result calculation using Ray of structure*/


#include <stdio.h>

// Defining the structure
struct student {
    int stud_USN;
    char stud_name[35];
    float stud_marks;
};

int main() {
    // Array of structures
    struct student stud[5];
    int n, i;

    printf("Enter no of Students: ");
    scanf("%d", &n);

    // Loop to input student details
    for (i = 0; i < n; i++) {
        printf("Enter student USN: ");
        scanf("%d", &stud[i].stud_USN);

        printf("Enter student name: \n");
        scanf("%s", stud[i].stud_name);

        printf("Enter student marks: ");
        scanf("%f", &stud[i].stud_marks);
    }

    printf("\nStudent details are: \n");

    // Loop to display student details
    for (i = 0; i < n; i++) {
        printf("Student USN is: %d\n", stud[i].stud_USN);
        printf("Student name is: %s\n", stud[i].stud_name);
        printf("Student marks is: %.2f\n", stud[i].stud_marks);
        printf("--------------------------\n");
    }

    return 0;
}
