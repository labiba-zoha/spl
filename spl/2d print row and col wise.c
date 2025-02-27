 #include<stdio.h>
 int main(){

 int i,j;
    int a[50][50];
    int m;
    int n;
    scanf("%d",&m);

    scanf("%d",&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n row wise");

        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d",a[i][j]);
            }
        }
    printf("\n coloum wise");
    for(j=0;j<n;j++)
    {
        for(i=0;i<m;i++)
        {
            printf("%d",a[i][j]);
        }
    }
    }
