#include <stdio.h>
#include <stdlib.h>
int s=0,n,t;
int sum()
{
    s = s+sum(n-1);
    return s;
}
int main()
{
   printf("enter ");
   scanf("%d",&n);
   t=sum(n);
   getch();
   return 0;
}
