#include<stdio.h>
int main()
{
    int a[50];
    int b[50];
    int c[50];
    int i,j,k=0;
    int m,n;
    int flag=0;
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
       scanf("%d",&a[i]);
    }
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                flag=1;

            }
        }
            if(flag==0)
            {
                c[k]=a[i];
                k++;
            }


         flag=0;
    }
    for(i=0;i<k;i++)
    {
        printf("%d ",c[i]);
    }




}
