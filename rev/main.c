#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,rem=0,div;
    clrscr();
    printf("enter the number u want to enter");
    scanf("%d",&num);
    while(num!=0)
    { div = num%10;
      rem = rem *10 + div;
      num = num /10;
    )
