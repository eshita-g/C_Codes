#include<stdio.h>
#include<conio.h>

int main()
{
    int a,num,p=0,s=1,i;
    printf("enter the number");
    scanf("%d",&num);
    while(num!=0)
    {
        a=num%10;
        for(i=a;i>=1;i--)
        {
            s=s*i;
        }
        p=p+s;
        num=num/10;
    }
    if(p==num)
    printf("the no is krishnamurthy");
    else
        printf("no");
    getch();
    return 0;
}



































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































