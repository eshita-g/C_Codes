#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j=1,stop;
    printf("enter the no");
    scanf("%d",&stop);
    while(j<=stop)
    {
for(i=1;i<=5;i++)
    {
        printf("%3d",j++);
        if(j==stop)
            break;}
    printf("\n");
    }

    return 0;
}
