#include<stdio.h>

int main()
{
    int m;
    printf("enter marks");
    scanf("%d",&m);
    if(m>=90&&m<101)
        printf("grade A");

    else if(m>=75&&m<90)
        printf("grade B");

    else if(m>=60&&m<75)
        printf("grade C");

    else if(m>=50&&m<60)
        printf("grade D");

    else if(m>=0&&m<50)
        printf("grade D");

    else
        printf("invalid input");
        
    return 0;
}