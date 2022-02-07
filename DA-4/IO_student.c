#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
    char name[10];
    int age;
    int cg;
    char reg[10];

}student;

int main()
{
    printf("Mohit Suhasaria\t19BCE2167\n");

    student e;
    int max;
    char target[10];
    FILE *fr,*fw;
    fr=fopen("student.dat","rb+");
    if(fr==NULL)
    {
        puts("Error");
        exit(1);
    }

    char ch;

    while(1)
    {
        printf("\n\n1.Add\t2.Display\t3.Delete\t4.Modify\n5.Topper\t6.Find using reg\n\n");
        fflush(stdin);
        ch=getchar();
        switch(ch)
        {
        case '1':
            fseek(fr,0,SEEK_END);
            scanf("%s %s %d %d",e.name,e.reg,&e.age,&e.cg);
            fwrite(&e,sizeof(e),1,fr);
            break;
        case '2':
            rewind(fr);
            while(fread(&e,sizeof(e),1,fr)==1)
                printf("\nName: %s\tReg: %s\nAge: %d\tCGPA: %d",e.name,e.reg,e.age,e.cg);
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
            remove("student.dat");
            rename("temp.dat","student.dat");
            fr=fopen("student.dat","rb+");
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
                    printf("\nEnter new Name, reg, age and cgpa\n");
                    fflush(stdin);
                    scanf("%s%s%d%d",e.name,e.reg,&e.age,&e.cg);
                    fseek(fr,-sizeof(e),SEEK_CUR);
                    fwrite(&e,sizeof(e),1,fr);
                    break;
                }
            }
            break;
        case '5':
            rewind(fr);
            max=0;
            while(fread(&e,sizeof(e),1,fr)==1)
            {
                if(e.cg>max)
                    max=e.cg;
            }
            rewind(fr);
            while(fread(&e,sizeof(e),1,fr)==1)
            {
                if(e.cg==max)
                {
                    fseek(fr,-sizeof(e),SEEK_CUR);
                    printf("Topper: %s",e.name);
                    break;
                }
            }
            break;
        case '6':
            printf("\nEnter target: ");
            fflush(stdin);
            gets(target);
            rewind(fr);
            while(fread(&e,sizeof(e),1,fr)==1)
            {
            if(strcmp(e.reg,target)==0)
            {
                puts("\nStudent Found");
                fseek(fr,-sizeof(e),SEEK_CUR);
                printf("\nName: %s\tReg: %s\nAge: %d\tCGPA: %d",e.name,e.reg,e.age,e.cg);
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
