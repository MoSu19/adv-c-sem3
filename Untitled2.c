#include <stdio.h>
#include <ctype.h>

int main ()
{
char ch;
int a=4,b=3,c;
scanf("%d%d",&a,&b);
scanf(" %c",&ch);
//ch = tolower(ch);
switch(ch)
{
    case '-' :
    c = a-b;
    printf("%d",c);
    break;
    case '+' :
    c = a+b;
    printf("%d",c);
    break;
    case '*' :
    c = a*b;
    printf("%d",c);
    break;
    default: printf("Error");
    break;
}
return 0;
}
