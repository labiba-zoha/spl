 #include<stdio.h>
 int main(){

 int i,j,k;
    int a[50][50];
    int b[50][50];
    int res[50][50];

    int m;
    int n;
    //scanf("%d",&m);

    //scanf("%d",&n);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }


        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
              scanf("%d",&b[i][j]);
            }
        }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {    int sum=0;
            for(k=0;k<3;k++)
            {
                sum=sum+a[i][k]*b[k][j];
            }
            res[i][j]=sum;
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",res[i][j]);
        }
        printf("\n");
    }
 }
