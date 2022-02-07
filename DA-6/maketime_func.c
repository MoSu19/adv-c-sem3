#include<stdio.h>
#include<time.h>

int main()
{
	puts("Mohit Suhasaria\t19BCE2167\n\n");

	struct tm p;
	char c[80];

	p.tm_year = 2021-1900;
	p.tm_mon=7-1;
	p.tm_mday=4;
	p.tm_hour=3;
	p.tm_min=45;
	p.tm_sec=2;
	p.tm_isdst=-1;

	if(mktime(&p)==-1)
		puts("Error");
	else
	{
		strftime(c,sizeof(c),"%c",&p);
		printf(c);
	}

	return 0;
}
