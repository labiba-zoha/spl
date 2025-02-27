 #include<stdio.h>
 int main(){

 int i,j;
    int a[50][50];
    //int m;
    int n;
    int sum=0;
    //scanf("%d",&m);

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }


        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i%2!=0||(j%2!=0&&i%2==0))
                {
                    sum=sum+a[i][j];
                }
            }
        }
        printf("%d",sum);
 }
