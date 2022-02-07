#include<stdio.h>

struct details
{
    char name[20];
    char rollno[20];
    char stream[20];
};

void display(struct details x)
{
    printf("%s\t%s\t%s\n",x.name,x.rollno,x.stream);
}

int main()
{
    struct details s[20];
    int n;
    printf("Enter no. of students: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("\nEnter details of student %d: ",i);
        scanf("%s%s%s",s[i].name,s[i].rollno,s[i].stream);
    }
    for(int i=0;i<n;i++)
    display(s[i]);

    return(0);
}
