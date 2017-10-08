#include <stdio.h>
#include <stdlib.h>

int main()
{   int i,num,c=0;
    printf("enter the page number of the book");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {   p=i;
        while(p!=0)
        {
            p=p/10;
            c++;

        }
    }
    printf("the value of c is %d",c);
    getch();
    return 0;

}
