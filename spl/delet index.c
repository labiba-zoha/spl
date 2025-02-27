
#include<stdio.h>
int main()
{
    int i;
    int a[50];
    int n;
    scanf("%d",&n);
    int deletin;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the index do u want to detect");
    scanf("%d",&deletin);
    for(i=deletin;i<n;i++)
    {
        a[i]=a[i+1];

    }
    n--;
    for(i=0;i<n;i++)
        printf("%d",a[i]);



}
