#include<stdio.h>
int main()
{
    int i,j,k;
    int n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i-1;j++)
        {
            printf(" ");
        }
        printf("*");
        for(k=1;k<=2*n-1-2*i;k++)
        {
            printf(" ");

        }
        if(i!=n)
        {
            printf("*");
        }
        printf("\n");
    }
}
