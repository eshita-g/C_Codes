#include <stdio.h>
#include <stdlib.h>
int main()
{
int n,b;
long int a;
printf("enter the values of n and b");
scanf("%d %d",&n,&b);
a= pow(b,n);
printf("%ld",a);
return 0;
}
