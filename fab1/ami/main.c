#include <stdio.h>
#include <stdlib.h>

int main()
{   int a,b,i,j,s=0,p=0;
    printf("enter 2 numbers");
    scanf("%d %d",&a,&b);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
         s=s+i;

        }
    }
    for(j=1;j<b;j++)
    {
        if(b%j==0)
        {
            p=p+j;
        }
    }
    if(p==s)
       {

       return 1;
       }
    else
       {
          return 0;
       }
    getch();
    return 0;

}
