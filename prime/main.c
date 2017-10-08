#include <stdio.h>
#include <stdlib.h>

int main()
{   int n,i,p;
    printf("enter a no");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
            p=0;

    }
    if(p==0)
    printf("no is not prime");
    else
    printf("no is prime");
    return 0;
}
