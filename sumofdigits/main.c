#include <stdio.h>
#include <stdlib.h>

int main()
{
 int n,s;
 printf("enter the value");
 scanf("%d",&n);
 s = sum(n);
 printf("%d",s);
 getch();
}
int sum(n)
{   int sum1=0;
    return(sum1+sum(n-1));
}
