#include<stdio.h>
int main()
{
      int i,j,n;
      int flag=0;
      int a[50];
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
          scanf("%d",&a[i]);
      }
      for(i=0;i<n;i++){
      for(j=i+1;j<n;j++)
      {
          if(a[i]==a[j])
          {
              printf("found duplicate number at index %d %d",i,j);
              flag=1;
          }
      }
      }
      if(flag==0)
      {
          printf("not found");
      }


}
