#include<stdio.h>

struct player
{
    char *name;
    int age;
    int matches;
    int avg;
}s[20];

void input()
{
    for(int i=0;i<20;i++)
    {
        /*printf("\nName: ");
        scanf("%s",s[i].name);
        printf("\Age: ");
        scanf("%d",&s[i].age);
        printf("\nNo of Matches: ");
        scanf("%d",&s[i].matches);
        printf("\nAverage Runs: ");
        scanf("%d",&s[i].avg);*/

        s[i].name="XYZ";
        s[i].age=14+(i/2);
        s[i].matches=4+(i%2);
        s[i].avg=40+i;
    }
}

void sort()
{
    struct player temp;

    for(int i=0;i<20;i++)
    {
        for(int j=i+1;j<20;j++)
        {
            if(s[i].avg>s[j].avg)
            {
                temp=s[j];
                s[j]=s[i];
                s[i]=temp;
            }

        }
    }
}

int main()
{
    printf("Mohit Suhasaria\t19BCE2167\n");
    input();
    sort();
  for(int i=0;i<20;i++)
    {
        printf("\nName: %s",s[i].name);
        printf("\nAge: %d",s[i].age);
        printf("\nNo of Matches: %d",s[i].matches);
        printf("\nAverage Runs: %d",s[i].avg);
    }
    return 0;
}
