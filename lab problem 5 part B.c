/*5) A currency exchange booth allows users to convert between two
currencies. Before confirming the exchange, the system simulates a swap
of the values to preview the result without actually changing the
original data. In other cases, it updates the actual values. Develop a
C program that implements both behaviours using Call by Value and Call
by reference.*/

#include <stdio.h>

// Call by Value (does not change actual values)
int callbyvalue(float a, float b)
{
    float temp = a;
    a = b;
    b = temp;
    return 0;
}

// Call by Reference: (changes original values)
int callbyreference(float *a, float *b)
{
    float temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}

int main()
{
    float cura, curb;

    // Input original values
    printf("Enter value of Currency A: ");
    scanf("%f", &cura);
    printf("Enter value of Currency B: ");
    scanf("%f", &curb);

    // Display before swap
    printf("Before any swap:\n");
    printf("Currency A=%f, Currency B=%f\n", cura, curb);

    // Call by Value (Simulate Swap)
    callbyvalue(cura, curb);

    // Original values remain unchanged after simulation
    printf("Call by Value:\n");
    printf("Currency A=%f, Currency B=%f\n", cura, curb);

    // Call by Reference (Actual Swap)
    callbyreference(&cura, &curb);

    // Original values updated after actual swap
    printf("Call by Reference:\n");
    printf("Currency A=%f, Currency B=%f\n", cura, curb);

    return 0;
}