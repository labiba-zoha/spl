#include<stdio.h>
int main()
{
    int x;
    int number;
    int N;
    printf("enter the number to guess");
    scanf("%d",&x);
    printf("enter the number of tries:");
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
    {
        scanf("%d",&number);
        if(x==number)
        {
            printf("right,player-2 wins!\n");
            break;
        }
        else
        {
            printf("wrong!%d chance left\n",N-i);
        }j
    }
    if(x!=number)
    {
        printf("  player 1 wins");
    }



}
