#include<string.h>
#include<stdio.h>

int main()

{
	char x[20],y[20],z[20];

	puts("Enter name: ");//1
	gets(z);//2
	strcpy(y,"Mohit "); //3
	strcpy(x,"19BCE2167 ");
	strcat(y,"Suhasaria"); //4
	puts(x);
	puts(y);
	printf("\n%d",strlen(x));//5
	printf("\n%d\n",strcmp(x,"19BCE2167 "));//6
	puts(strlwr(z));//7
	puts(strupr(z));//8
	puts(strrev(z));//9
	puts(strset(z,'X')); //10

	return 0;
}
