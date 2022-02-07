#include<stdio.h>

struct part
{
    char sno[3];
    int year;
    char mat[10];
    int qt;
}
test[6] = { "AA0", 2005, "Iron", 20,
"BB1", 2007, "Steel", 13,
"BB2", 1992, "Aluminium", 57,
"CC1", 2005, "Stainless Steel", 7,
"CC6", 2007, "Steel", 34,
"CC7", 2010, "Steel", 14
};

int main()
{
    printf("Mohit Suhasaria\t19BCE2167\n");

    for(int i=0;i<6;i++)
        if(test[i].sno[0]=='B' || (test[i].sno[0]=='C' && test[i].sno[2]<'7'))
            printf("\n\nSerial no: %s\nYoM: %d\nMaterial: %s\nQuantity: %d",test[i].sno,test[i].year,test[i].mat,test[i].qt);

    return 0;
}
