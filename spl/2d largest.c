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

         int max;
         int index1=0;
         int index2=0;
         max=a[0][0];
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
               if(a[i][j]>max)
               {
                   max=a[i][j];
                   index1=i;
                   index2=j;
               }
            }
        }

   printf("max=%d and index [%d][%d]",max,index1,index2);

 }
