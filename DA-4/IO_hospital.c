#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
    char name[10];
    int dur;
    char doc[10];
    char diag[10];
    char icu[3];


}patient;

int main()
{
    printf("Mohit Suhasaria\t19BCE2167\n");

    patient e;
    int max=0;
    char target[10];
    FILE *fr,*fw;
    fr=fopen("patients.dat","rb+");
    if(fr==NULL)
    {
        puts("Error");
        exit(1);
    }

    char ch;

    while(1)
    {
        printf("\n\n1.Add\t2.Discharge\t3.Change Diagnosis\n4.List ICU Patients\n5.List by Doctor\n6.Longest staying patient\n\n");
        fflush(stdin);
        ch=getchar();
        switch(ch)
        {
        case '1':
            fseek(fr,0,SEEK_END);
            scanf("%s %s %s %s %d",e.name,e.diag,e.doc,e.icu,&e.dur);
            fwrite(&e,sizeof(e),1,fr);
            break;
        case '2':
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

        case '3':
            printf("\nEnter target: ");
            fflush(stdin);
            gets(target);
            rewind(fr);
            while(fread(&e,sizeof(e),1,fr)==1)
            {
                if(strcmp(e.name,target)==0)
                {
                    printf("\nEnter new Diagnosis\n");
                    fflush(stdin);
                    scanf("%s",e.diag);
                    fseek(fr,-sizeof(e),SEEK_CUR);
                    fwrite(&e,sizeof(e),1,fr);
                    break;
                }
            }
            break;
        case '4':
            rewind(fr);
            while(fread(&e,sizeof(e),1,fr)==1)
            {
            if(strcmp(e.icu,"Yes")==0)
            {
                fseek(fr,-sizeof(e),SEEK_CUR);
                printf("\nName: %s",e.name);
                fseek(fr,sizeof(e),SEEK_CUR);
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
            if(strcmp(e.doc,target)==0)
            {
                fseek(fr,-sizeof(e),SEEK_CUR);
                printf("\nName: %s",e.name);
                fseek(fr,sizeof(e),SEEK_CUR);
            }
            }
            break;

        case '6':
            rewind(fr);
            max=0;
            while(fread(&e,sizeof(e),1,fr)==1)
            {
                if(e.dur>max)
                    max=e.dur;
            }
            rewind(fr);
            while(fread(&e,sizeof(e),1,fr)==1)
            {
                if(e.dur==max)
                {
                    fseek(fr,-sizeof(e),SEEK_CUR);
                    printf("\nLongest Staying Patient: %s",e.name);
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
