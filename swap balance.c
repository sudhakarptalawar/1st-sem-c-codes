#include<stdio.h>
void s(int *a, int *b){
float temp=*a;
*a=*b;
*b=temp;
}
int main()
{
int b1,b2;
    printf("Bank balance 1 : ");
    scanf("%d",&b1);
    printf("Bank balance 2 : ");
    scanf("%d",&b2);
    printf("before swapping\n");
    printf("balance 1: %d\n",b1);
    printf("balance 2: %d\n",b2);
    s(&b1,&b2);
    printf("after swapping\n");
    printf("balance 1: %d\n",b1);
    printf("balance 2: %d\n",b2);
    
    return 0;
}