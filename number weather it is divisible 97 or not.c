
//number whether it is divisible by 97 or not
#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);{
    if (n%97 == 0)
        printf("The number is divisible by 97");
    else
        printf("The number is NOT divisible by 97");
    }    
    return 0;
}