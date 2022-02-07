#include<stdio.h>

struct cust
{
    char *name;
    int acc;
    int bal;
}s[200];

void min_bal(struct cust *obj)
{
    while(obj->acc!=NULL)
    {
        if(obj->bal<100)
        {
            printf("\n\nName: %s",obj->name);
            printf("\nAccount No: %d",obj->acc);
            printf("\nBalance: %d",obj->bal);
        }
        obj++;
    }
}

void trans(int ac,int amt,int code,struct cust *obj)
{
    while(obj->acc!=NULL)
    {
        if(ac==obj->acc)
        {
            if(code==1)
                obj->bal+=amt;
            else if(code==0)
            {
                if(obj->bal-amt>=100)
                    obj->bal-=amt;
                else
                    printf("\nThe balance is insufficient for the specified withdrawal");
            }
            else
                printf("\nError!");
        }

        obj++;
    }
}

int main()
{
    printf("Mohit Suhasaria\t19BCE2167\n");

    for(int i=0;i<200;i++)
    {
        s[i].name="XYZ";
        s[i].acc=1000+i;
        s[i].bal=rand();
    }

    printf("\n----Accounts balance below 100----");
    min_bal(s);

    int target,amt,code;

    printf("\n\nEnter Account No: ");
    scanf("%d",&target);
    printf("\nEnter 0 for withdrawal or 1 for deposit: ");
    scanf("%d",&code);
    printf("\nEnter Amount: ");
    scanf("%d",&amt);

    trans(target,amt,code,s);

    return 0;
}
