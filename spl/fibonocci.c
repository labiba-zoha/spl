#include<stdio.h>
int main()
{

    int i,n;
    int f0=0;
    int f1=1;
    int fb;
     scanf("%d",&n);
    printf("%d %d ",f0,f1);

    for(i=2;i<=n;i++)
    {
        fb=f0+f1;
        printf("%d ",fb);
        f0=f1;
        f1=fb;
    }
}
