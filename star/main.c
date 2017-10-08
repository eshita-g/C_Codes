#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,k;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=2n;i++)
    {
        for(j=1;j<=n+1-i;j++)
        {
            printf("*");
        }
        printf("\n");
        for(k=1;k<=n;k++)
        {
            printf("0");
        }
        printf("\n");
    }
    getch();
    return 0;
}
