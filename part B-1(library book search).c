#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,low,mid,high,key,n,book[100];
    printf("enter number of books\n");
    scanf("%d",&n);

    printf("enter book id ascending order\n");
    for(i=0; i<n; i++) {
        scanf("%d",&book[i]);
    }
    printf("entry book id to search\n");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high) {
        mid=(low+high)/2;
            if(key==book[mid]){
                printf("book is%d found at particular location %d \n",mid+1,key);
            exit( 0);
        }
        if(key>book[mid])
            low=mid+1;
        if(key<book[mid])
            high=mid-1;
    }
printf("book is not found at location");
return 0;
}