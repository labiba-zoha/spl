#include<stdio.h>
#include<math.h>
int main()
{
    int i,j;
    int a[50][50];
    int n;
    scanf("%d",&n);
    for(i=0;i<sqrt(n);i++)
    {
        for(j=0;j<sqrt(n);j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<sqrt(n);i++)
    {
        for(j=0;j<sqrt(n);j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }



}

