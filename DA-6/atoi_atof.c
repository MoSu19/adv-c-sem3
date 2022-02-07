#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	puts("Mohit Suhasaria\t19BCE2167\n\n");

    int v;
    float x;
    char s[20];

    strcpy(s, "12345");
    v = atoi(s);
    printf("String = %s, Int = %d\n", s, v);

    strcpy(s, "12345");
    x = atof(s);
    printf("String = %s, Float = %.2f\n", s, x);

    return 0;
}
