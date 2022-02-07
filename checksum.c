#include<stdio.h>
#include<string.h>

char* add(char* a,char* b,char* sum,int length)
{
    char carry ='0';

    for(int i=length-1;i>=0;i--)
        {
			if(a[i]=='0' && b[i]=='0' && carry=='0')
            {
                sum[i]='0';
                carry='0';
            }
            else if(a[i]=='0' && b[i]=='0' && carry=='1')
            {
                sum[i]='1';
                carry='0';
            }
            else if(a[i]=='0' && b[i]=='1' && carry=='0')
            {
                sum[i]='1';
                carry='0';
            }
            else if(a[i]=='0' && b[i]=='1' && carry=='1')
            {
                sum[i]='0';
                carry='1';

            }
            else if(a[i]=='1' && b[i]=='0' && carry=='0')
            {
                sum[i]='1';
                carry='0';
            }
            else if(a[i]=='1' && b[i]=='0' && carry=='1')
            {
                sum[i]='0';
                carry='1';
            }
            else if(a[i]=='1' && b[i]=='1' && carry=='0')
            {
                sum[i]='0';
                carry='1';
            }
            else if(a[i]=='1' && b[i]=='1' && carry=='1')
            {
                sum[i]='1';
                carry='1';
            }
            else
                break;
        }

        return sum;
}

int main()
{
    printf("Mohit Suhasaria\t19BCE2167\n");
    char a[20],b[20];
    int i,length,flag=0;

	printf("\nEnter first binary string: ");
    scanf("%s",a);
    printf("\nEnter second binary string: ");
    scanf("%s",b);

    if(strlen(a)==strlen(b)){
		length = strlen(a);
		char carry='0';
		char* sum=(char*)malloc((length+1)*sizeof(char));
		char* complement=(char*)malloc((length+1)*sizeof(char));

		complement[length]='\0';
		sum[length]='\0';

        sum=add(a,b,sum,length);

		printf("\nSum: %s",sum);

		for(i=0;i<length;i++)
        {
            if(sum[i]=='0')
                complement[i]='1';
            else
                complement[i]='0';
        }

		printf("\nChecksum: %s",complement);
		printf("\nData to be transmitted: %s %s %s",a,b,complement);
        printf("\n\n\nReceived data: %s %s %s",a,b,complement);

        sum=add(sum,complement,sum,length);

        printf("\nSum: %s",sum);

		for(i=0;i<length;i++)
        {
            if(sum[i]=='0')
                complement[i]='1';
            else
            {
                complement[i]='0';
                flag++;
            }
        }

        printf("\nComplement: %s",complement);

        if(flag==length)
            printf("\n\n...Data Received Successfully!");
        else
            printf("\n\n...Error in Received Data");
        free(sum);
        free(complement);
	}
	else
		printf("\nWrong input strings");

    return 0;
}
