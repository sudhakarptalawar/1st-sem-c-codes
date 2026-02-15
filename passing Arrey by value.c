void display (int i);

int main()
{
int n, i, a[10];

printf("Enter the no f elements. \n ");
scanf("%d",&n);
 for (i=0; i<n; i++);
{
Scanf("%d", &a[i]);
}
printf("elements are \n");

for(i=0;i<n;i++)
{
display (a[i]);
}
return 0;
}
void display (int i)
{
printf("%d",i);
}




    