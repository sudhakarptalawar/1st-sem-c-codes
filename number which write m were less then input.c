//numbers which are less then use input by di while method
#include<stdio.h>
int main()
{
int n,i=1;
printf("enter two numbers:");
scanf("%d",&n);

   do{
   printf("number are %d\n",i);
   i++;
   } while(i<=n);
return 0;
}