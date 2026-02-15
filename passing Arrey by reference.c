#include <stdio.h>

// Function prototype
void display(int b[], int n);

int main() {
    int n, i, a[10];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\nThe elements are:\n");
    display(a, n); // Passing the array (reference)

    return 0;
}

void display(int b[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d \t", b[i]);
    }
}
