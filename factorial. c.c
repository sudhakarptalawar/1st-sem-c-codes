//factorial
#include<stdio.h>
int main()
{
int product=1;
int n=4;
for(int i=1;i<=n;i++){
product*=i;
}
printf("%d", product);
return 0;
}
