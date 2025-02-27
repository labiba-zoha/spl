#include<stdio.h>
int main()
{
    int i,n;
    int value=0;
    int index=0;
    int a[50];
    scanf("%d",&n);
    printf("enter the value\n");
    scanf("%d",&value);
    printf("enter the index\n");
    scanf("%d",&index);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n;i>index;i--)//because of back end
    {
        a[i]=a[i-1];//a[4]=a[3] create back end
    }
    a[index]=value;
    n++;
    //as a[4] doesnot exists as the loop start from 4 not 3
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
