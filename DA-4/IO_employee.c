#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
    char name[10];
    int age;
    int sal;

}employee;

int main()
{
    printf("Mohit Suhasaria\t19BCE2167\n");

    employee e;
    char target[10];
    FILE *fr,*fw;
    fr=fopen("employee.dat","rb+");
    if(fr==NULL)
    {
        puts("Error");
        exit(1);
    }

    char ch;

    while(1)
    {
        printf("\n\n1.Add\t2.Display\t3.Delete\t4.Modify\n\n");
        fflush(stdin);
        ch=getchar();
        switch(ch)
        {
        case '1':
            fseek(fr,0,SEEK_END);
            scanf("%s %d %d",e.name,&e.age,&e.sal);
            fwrite(&e,sizeof(e),1,fr);
            break;
        case '2':
            rewind(fr);
            while(fread(&e,sizeof(e),1,fr)==1)
                printf("\nName: %s\tAge: %d\tSalary: %d",e.name,e.age,e.sal);
            break;
        case '3':
            printf("\nEnter target: ");
            fflush(stdin);
            gets(target);
            rewind(fr);
            fw=fopen("temp.dat","wb");
            while(fread(&e,sizeof(e),1,fr)==1)
            {
                if(strcmp(e.name,target)!=0)
                    fwrite(&e,sizeof(e),1,fw);
            }
            fclose(fr);
            fclose(fw);
            remove("employee.dat");
            rename("temp.dat","employee.dat");
            fr=fopen("employee.dat","rb+");
            break;
        case '4':
            printf("\nEnter target: ");
            fflush(stdin);
            gets(target);
            rewind(fr);
            while(fread(&e,sizeof(e),1,fr)==1)
            {
                if(strcmp(e.name,target)==0)
                {
                    printf("\nEnter new Name, age and salary\n");
                    fflush(stdin);
                    scanf("%s%d%d",e.name,&e.age,&e.sal);
                    fseek(fr,-sizeof(e),SEEK_CUR);
                    fwrite(&e,sizeof(e),1,fr);
                    break;
                }
            }
            break;
        default:
            break;
        }
    }

    return 0;
}
