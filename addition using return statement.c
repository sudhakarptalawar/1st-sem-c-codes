#include<stdio.h>
int add(int a, int b);

int main()
{
    int s;
    s = add(5, 3);
    printf("Sum = %d", s);
    return 0;
}

int add(int a, int b)
{
    int s=(a + b);
    return s;
}