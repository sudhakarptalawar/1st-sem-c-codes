#include<stdio.h>
int main()
{
int a;
printf("the value of a\n");
scanf("%d",&a);
switch(a)
{
   case 1:
        printf("you entered 1");
        break; 
   case 2:
        printf("you entered 2");
        break; 
   case 3:
        printf("you entered 3");
        break; 
   case 4:
        printf("you entered 4");
        break; 
   default: 
        printf("no number matches");
}
return 0;
}
