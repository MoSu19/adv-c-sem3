#include<stdio.h>
#include<string.h>

int main()
{
    printf("Mohit Suhasaria\t19BCE2167\n");

    char **names, *target;
    int lis,flag=0;

    scanf("%d",&lis);
    names = malloc(lis * sizeof(char*));

    for(int i=0;i<lis;i++)
        names[i]= malloc(100 * sizeof(char));

    for(int i=0;i<lis;i++)
    {
        scanf("%*[\n]");
        scanf("%[^\n]s",names[i]);
    }

    target=malloc(100*sizeof(char));
    printf("\nEnter target: ");
    scanf("%s",target);

    for(int i=0;i<lis;i++)
    {
        if(strcmp(target,names[i]))
        {
            flag=i;
            break;
        }
    }

    if(flag==0)
        printf("\nName not found.");
    else
        printf("\nName fount at %d.",flag);

    free(names);
    free(target);

    return 0;
}
