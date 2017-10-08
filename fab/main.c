#include <stdio.h>
#include <stdlib.h>

int main()
{
int i=0;
int j=1,k,c;
int n;
printf("enter the value");
scanf("%d",&n);
printf("%d",i);
for(c=1;c<=n;c++)
{
  k=i+j;
  j=i;
  j=k;
  printf("%d",k);


}
getch();
return 0;
}
