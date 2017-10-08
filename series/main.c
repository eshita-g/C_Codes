#include <stdio.h>
#include <stdlib.h>

int main()
{
 int i,x,n;
 float term=1.0, s=1.0;
 printf("enter the value of x and n");
 scanf("%d %d",&x,&n);
 for(i=1;i<=n;i++)
 {
     term =term* (float)x/i;
     s=s+term;
 }
 printf("the vlaue of s is %f",s);
 getch();
 return 0;
}
