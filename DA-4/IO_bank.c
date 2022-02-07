#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
    char name[10];
    int age;
    int bal;
    char acc[10];

}customer;

int main()
{
    printf("Mohit Suhasaria\t19BCE2167\n");

    customer e;
    int n;
    char target[10];
    FILE *fr,*fw;
    fr=fopen("bank.dat","rb+");
    if(fr==NULL)
    {
        puts("Error");
        exit(1);
    }

    char ch;

    while(1)
    {
        printf("\n\n1.Add\t2.Display\t3.Delete\t4.Modify\n5.Find\t6.Withdraw\n\n");
        fflush(stdin);
        ch=getchar();
        switch(ch)
        {
        case '1':
            fseek(fr,0,SEEK_END);
            scanf("%s %s %d %d",e.name,e.acc,&e.age,&e.bal);
            fwrite(&e,sizeof(e),1,fr);
            break;
        case '2':
            rewind(fr);
            while(fread(&e,sizeof(e),1,fr)==1)
                printf("\nName: %s\tA/c: %s\nAge: %d\tBalance: %d",e.name,e.acc,e.age,e.bal);
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
            remove("bank.dat");
            rename("temp.dat","bank.dat");
            fr=fopen("bank.dat","rb+");
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
                    printf("\nEnter new Name, A/c, age and balance\n");
                    fflush(stdin);
                    scanf("%s%s%d%d",e.name,e.acc,&e.age,&e.bal);
                    fseek(fr,-sizeof(e),SEEK_CUR);
                    fwrite(&e,sizeof(e),1,fr);
                    break;
                }
            }
            break;
        case '5':
            printf("\nEnter target: ");
            fflush(stdin);
            gets(target);
            rewind(fr);
            while(fread(&e,sizeof(e),1,fr)==1)
            {
            if(strcmp(e.acc,target)==0)
            {
                puts("\nAccount Found");
                fseek(fr,-sizeof(e),SEEK_CUR);
                printf("\nName: %s",e.name);
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
            if(strcmp(e.acc,target)==0)
            {
                puts("\nAccount Found\nEnter Amount to withdraw: ");
                fflush(stdin);
                scanf("%d",&n);
                fseek(fr,-sizeof(e),SEEK_CUR);
                if(e.bal-n>=1000)
                {
                    e.bal-=n;
                    fwrite(&e,sizeof(e),1,fr);
                    printf("\nUpdated Balance: %d",e.bal);
                }
                else
                    puts("\nInsufficient Balance");
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
