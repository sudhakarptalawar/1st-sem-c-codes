#include <stdio.h>
#include <stdlib.h> // Necessary for exit()

int main() {
    int attended, total;
    float percentage;
    int requiredClasses;
    int skipClasses;

    printf("Enter number of classes attended: ");
    scanf("%d", &attended);

    printf("Enter total number of classes conducted: ");
    scanf("%d", &total);
    
    if(total < attended){
        printf("invalid input\n");
        exit(0);
    }

    percentage = (attended * 100.0) / total;
    printf("Attendance Percentage = %.2f%%\n", percentage);
    
    if (percentage >= 85) {
        printf("Status: Healthy\n");
        skipClasses = (int)(attended / 0.85) - total;

        if (skipClasses > 0) {
            printf("Safe Zone: You can take max leave of %d days continuously with safe attendence.\n", skipClasses);
        } else {
            printf("Warning: You are exactly at the margin. Don't skip any classes!\n");
        }

    } else {
        printf("Status: Risky\n");
        requiredClasses = (int)((0.85 * total - attended) / (1 - 0.85)) + 1;
        printf("You need to attend %d more classes continuously to reach 85%%.\n", requiredClasses);
    }

    return 0;
}
    