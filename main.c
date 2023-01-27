#include<stdio.h>

int main()

{
    int n,m,i,j;
    printf("\t***** FINDING PRIME NO. IN BETWEEN GIVEN RANGE *****\n");
    printf("Enter starting range : ");
    scanf("%d",&n);
    printf("Enter ending range : ");
    scanf("%d",&m);
    printf("Prime no. are:\n");
    for(i=n+1;i<m;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            break;
        }

    if(i==j)
       printf("%d\t",i);
     }
    return 0;
}
