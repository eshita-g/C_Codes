#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{   int n,i,p;
    printf("enter the no:");
    scanf("%d",&n);
    for(i=2;i<=sqrt(n);i++)
    {

        if(n%i==0)
        {   p=0;
            break;
        }
    }
    if(p)
        printf("the number is prime");
    else
        printf("the no is not prime");
    return 0;
    getch();
}
