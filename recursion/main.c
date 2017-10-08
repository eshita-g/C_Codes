#include <stdio.h>
#include <stdlib.h>
int sum_of_digits(n)
{   int s;
    s=n;
    if(n==0)
        return 0;
    s=s+sum_of_digits(n-1);
    return s;
}
int main()
{   int p,n;
    printf("enter the value of n");
    scanf("%d",&n);
    p=sum_of_digits(n);
    printf("sum of digits are %d",p);
    return 0;


}
