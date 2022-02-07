#include<stdio.h>

int main()
{
    printf("Mohit Suhasaria\t19BCE2167\n");
    float avg[5];
    for(int i=0;i<5;i++,avg[i]=0);
    int marks[50],in=0;
    for(int i=0;i<50;i++)
    {
        marks[i]=rand()%101;
        in=i/10;
        avg[in]+=marks[i];
    }
    for(int i=0;i<5;i++,avg[i]/=10);
    printf("\nS1\tS2\tS3\tS4\tS5\n");
    for(int i=0;i<10;i++,printf("\n"))
        for(int j=0;j<5;j++)
        printf("%d\t",marks[i*5+j]);
    printf("-----------------------------------\n");
    for(int i=0;i<5;i++,printf("%.2f\t",avg[i]));
}
