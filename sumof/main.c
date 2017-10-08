#include <stdio.h>
#include <stdlib.h>
int sumdidgit(int num)
int k,a,p,s=0;
int sumdigit(int k)

{
    if (k==0)
        return 0;

     a = k%10;
     s=s+a;
    return(s+sumdigit(k/10));
}
int main()
{
    printf("enter num");
    scanf("%d",&k);
    p = sumdigit(k);
    printf("%d",p);
    getch();
    return 0;
}
