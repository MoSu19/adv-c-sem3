#include<stdio.h>
#include<time.h>

int main()
{
	puts("Mohit Suhasaria\t19BCE2167\n\n");

	time_t s,e,as;
	clock_t c;
	struct tm* p;
	double d;

	as=time(NULL);
	p=localtime(&as);

	printf("It is: %s",asctime(p));

	printf("\nTicks since launch: %.1f",(double)c);

	time(&s);
	sleep(2);

	c=clock();

	time(&e);
	d=difftime(e,s);
	printf("\nTotal Execution time: %.1f s",d);

	return 0;
}
