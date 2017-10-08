#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,num,s=0;
    printf("enter the num");
    scanf("%d",num);
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            s=s+i;

        }
    }
    printf("%d",s);
    getch();
    return 0;
}
