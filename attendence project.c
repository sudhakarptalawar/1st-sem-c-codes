#include <stdio.h>

int main() {
    int attended, total;
    float percentage;
    int requiredClasses;

    printf("Enter number of classes attended: ");
    scanf("%d", &attended);

    printf("Enter total number of classes conducted: ");
    scanf("%d", &total);
    
    if(total<attended){
    printf("invalid input");
    exit (0);
    }
    percentage = (attended * 100.0) / total;
    printf("Attendance Percentage = %.2f%%\n", percentage);
    

    
    if (percentage >= 85) {
        printf("Status: Healthy\n");
    } else {
        printf("Status: Risky\n");

        requiredClasses = (int)((0.85 * total - attended) / (1 - 0.85)) + 1;

        printf("You need to attend %d more classes continuously to reach 85%%.\n", requiredClasses);
    }

    return 0;
}
    