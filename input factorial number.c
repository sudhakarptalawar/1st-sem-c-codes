//factorial
#include<stdio.h>
int main()
{
int product=1;
int n;
printf("enter number");
scanf("%d",&n);
for(int i=1;i<=n;i++){
product*=i;
}
printf("%d", product);
return 0;
}
