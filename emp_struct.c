#include<stdio.h>

struct emp
{
    int eid;
    char* name;
    struct date
    {
        int day;
        int month;
        int year;
    }doj;
    int ph;
}s[100];


void elig(struct emp *obj)
{
    while(obj->eid!=NULL)
    {
        if(obj->eid%5==0 && obj->doj.year<2010)
            printf("\n%d",obj->eid);

        obj++;
    }
}
void disp(struct emp obj)
{
    printf("\n\nName: %s",obj.name);
    printf("\nID: %d",obj.eid);
    printf("\nDoJ: %d-%d-%d",obj.doj.day,obj.doj.month,obj.doj.year);
    printf("\nPhone: %d",obj.ph);
}

int main()
{
    printf("Mohit Suhasaria\t19BCE2167\n");

    for(int i=0;i<20;i++)
    {
        s[i].name="XYZ";
        s[i].eid=100+i;
        s[i].doj.day=(rand()%(30 - 1 + 1)) + 1;
        s[i].doj.month=(rand()%(12 - 1 + 1)) + 1;
        s[i].doj.year=(rand()%(2021 - 2000 + 1)) + 2000;
        s[i].ph=921314781+i;
        disp(s[i]);
    }

    printf("\n\nEligible Employees:");
    elig(s);
}
