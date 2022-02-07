#include<stdio.h>
#include"struct_cust.h"

int main()
{
    printf("Mohit Suhasaria\t19BCE2167\n");
    user u;
    u.name= "Mohit";
    u.dat=10;
    printf("%s\t%d",u.name,u.dat);
}
