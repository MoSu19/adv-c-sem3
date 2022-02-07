#include<stdio.h>
#include<string.h>

int main()
{
	puts("\nMohit Suhasaria\t19BCE2167\n\n");

	char w[10];
	puts("Enter Word: ");
	gets(w);

	for(int i=1;i<strlen(w)-1;i++)
	{
		char ch[10];
		ch[0]=w[i-1];
		ch[1]=w[i+1];
		ch[2]='\0';

		if(strcmp(ch,"at")==0)
			printf("\n%c (a+t=at)",w[i]);

		else if(strcmp(ch,"on")==0)
			printf("\n%c (o+n=on)",w[i]);

		else if(strcmp(ch,"by")==0)
			printf("\n%c (b+y=by)",w[i]);

		else if(strcmp(ch,"of")==0)
			printf("\n%c (o+f=of)",w[i]);

	}

	return 0;
}
