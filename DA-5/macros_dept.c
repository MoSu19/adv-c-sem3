#include <stdio.h>
#include <string.h>

#define assembly "assembly"
#define manufacturing "manufacturing"
#define accounts "accounts"
#define stores  "stores"

int main( )
{
    printf("Mohit Suhasaria\t19BCE2167\n");

    struct employee
    {
    char name[ 30 ] ;
    int age ;
    float bs ;
    char* department ;
    } ;

    struct employee e ;

    strcpy ( e.name, "Mohit" ) ;
    e.age = 21 ;
    e.bs = 42069.00 ;
    e.department = manufacturing ;

    printf ( "Name = %s\n", e.name ) ;
    printf ( "Age = %d\n", e.age ) ;
    printf ( "Basic salary = %.2f\n", e.bs ) ;
    printf ( "Dept = %s\n", e.department ) ;
    if ( e.department == accounts )
    printf ( "%s is an accounant\n", e.name ) ;
    else
    printf ( "%s is not an accounant\n", e.name ) ;
    return 0 ;
}

