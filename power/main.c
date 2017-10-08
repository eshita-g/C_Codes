#include <stdio.h>
#include <stdlib.h>
int c=0;
int power_of_factor(m,n)
{
      int t;
    if(m==0)
        return 0;
    m=m/n;
    c++;
   t=power_of_factor(m,n);
    return c;

}
int main()
{   int m,n,p;
    printf("enter the number");
    scanf("%d",&m);
    printf("enter the prime number");
    scanf("%d",&n);
    p=power_of_factor(m,n);
    printf("the value is %d",p);
    return 0;
}
