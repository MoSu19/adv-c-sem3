#include <stdio.h>
#include <string.h>

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
    enum status s;
    } ;

int main( )
{
    printf("Mohit Suhasaria\t19BCE2167\n");

    struct employee e[3] ;

    strcpy ( e[0].name, "Mohit" ) ;
    e[0].age = 21 ;
    e[0].bs = 42069.00 ;
    e[0].department = manufacturing ;
    e[0].s = single ;

    strcpy ( e[1].name, "John" ) ;
    e[1].age = 21 ;
    e[1].bs = 42069.00 ;
    e[1].department = manufacturing ;
    e[1].s = married ;

    strcpy ( e[2].name, "Jane" ) ;
    e[2].age = 21 ;
    e[2].bs = 42069.00 ;
    e[2].department = manufacturing ;
    e[2].s = single ;


    for(int i=0;i<3;i++)
    {
        if ( e[i].s == single )
            printf ( "%s is single\n", e[i].name ) ;
    }

    return 0 ;
}


