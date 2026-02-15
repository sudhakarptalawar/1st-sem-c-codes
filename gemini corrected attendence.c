#include <stdio.h>
#include <math.h>

void calculateAttendance() {
    int attended, total, required;
    float percentage;
    const float criteria = 0.85; // 85% requirement

    printf("\nEnter number of classes attended: ");
    scanf("%d", &attended);
    printf("Enter total number of classes conducted: ");
    scanf("%d", &total);

    // Input Validation
    if (attended > total) {
        printf("Error: Attended classes cannot be more than total classes!\n");
        return;
    }

    percentage = (attended * 100.0) / total;
    printf("Attendance Percentage = %.2f%%\n", percentage);
    

    if (percentage >= 85) {
        printf("Status: Healthy\n");
    } else {
        printf("Status: Risky\n");
        // Calculating required classes to reach 85%
       required = (int)ceil((criteria * total - attended) / (1 - criteria));
        printf("You need to attend %d more classes continuously to reach 85 %%.\n");
    }
}

int main() {
    int choice;
    printf("--- BIET Student Attendance Tracker ---\n");

    do {
        calculateAttendance();
        printf("\nCheck another subject? (1 for Yes, 0 for Exit): ");
        scanf("%d", &choice);
    } while (choice == 1);

    printf("Keep studying and stay healthy!\n");
    return 0;
}
