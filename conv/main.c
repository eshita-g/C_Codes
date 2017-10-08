#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int c=0;
int conv(n,b)
{
    int x,number=0;
    if(n==0)
        return 0;
    x=n%10;
    n=n/10;
    number=x*pow(b,c);
    c++;
    number=number+conv(n,b);
    return number;

}
int main()
{
    int n,b,p;
    printf("enter the no");
    scanf("%d",&n);
    printf("enter the base number ");
    scanf("%d",&b);
    p=conv(n,b);
    printf("the value is %d",p);
    return 0;


}
