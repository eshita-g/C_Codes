#include <stdio.h>
#include <stdlib.h>

main()
{
    int i,n,r,s=1;
    printf("enter the value");
    scanf("%d", &n);
    printf("enter the value");
    scanf("%d",&r);
    for(i=0;i<r;i++)
    {
      s = (s*(n-i)/(i+1));
    }
    printf("the value is %d",s);
    getch();
}
