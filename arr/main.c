#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a[4][4],i,j;
 printf("enter the elemnets of array");
 for(i=0;i<4;i++)
 {
     for(j=0;j<4;j++)
     {
         scanf("%d",&a[i][j]);

     }
 }
 printf("elements before exchanging");
 for(i=0;i<4;i++)
 {
     for(j=0;j<4;j++)
     {
         printf("%d",a[i][j]);
         printf(" ");
     }
     printf("\n");
 }
 printf("elements after exchanging");
 for(i=0;i<4;i++)
 {
     for(j=3;j>=0;j--)
     {
         printf("%d",a[i][j]);
         printf(" ");
     }
     printf("\n");
 }
 return 0;
}
