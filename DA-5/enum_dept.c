#include <stdio.h>
#include <string.h>

#define n(x) f(x)
#define married "married"
#define single "single"

char* f(int x)
{
    switch(x)
    {
    case 0:return "assembly";
        break;

    case 1:return "manufacturing";
        break;

    case 2:return "accounts";
        break;

    case 3:return "stores";
        break;
    }
}
int main( )
{
    printf("Mohit Suhasaria\t19BCE2167\n");

    enum dept
    {
        assembly, manufacturing, accounts, stores
    };

    enum status
    {
        married,single
    };

    struct employee
    {
    char name[ 30 ] ;
    int age ;
    float bs ;
    enum dept department ;

    } ;

    struct employee e[3] ;

    strcpy ( e[0].name, "Mohit" ) ;
    e[0].age = 21 ;
    e[0].bs = 42069.00 ;
    e[0].department = manufacturing ;
    e[0].department = single ;

    printf ( "Name = %s\n", e[0].name ) ;
    printf ( "Age = %d\n", e[0].age ) ;
    printf ( "Basic salary = %.2f\n", e.bs ) ;
    printf ( "Dept = %s\n", n(e[0].department) ) ;

    if ( e.department == accounts )
    printf ( "%s is an accounant\n", e.name ) ;

    return 0 ;
}

