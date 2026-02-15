#include<stdio.h>
int main()
{
    int scores[50],i,j,n,temp;

    // Input number of students
    printf("Enter number of students:");
    scanf("%d",&n);

    // Input scores
    printf("Enter the scores of students:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&scores[i]);
    }

    // Bubble Sort in descending order
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(scores[j]<scores[j+1])
            {
                // swap
                temp=scores[j];
                scores[j]= scores[j+1];
                scores[j+1]=temp;
            }
        }
    }

    // Display sorted scores
    printf("Scores in Descending Order:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",scores[i]);
    }
    return 0;
}
