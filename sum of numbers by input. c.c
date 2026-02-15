#include<stdio.h>
int main()
{
int i=1,a,sum=0;
printf("write last number");
scanf("%d",&a);
while(i<=a){
sum +=i;
i++;
}
printf("the sum is%d", sum);
return 0;
}