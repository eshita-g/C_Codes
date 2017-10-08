#include <stdio.h>
#include <stdlib.h>

int main()
{
char str[128];
printf(“enter a string in lower:”);
scanf(“%[a-z]s”,str);
printf(“The string was %s \n”,str);
return 0;
}

