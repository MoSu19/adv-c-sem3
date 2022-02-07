#include<stdio.h>
#include<stdlib.h>

int v[]={3,1,5,91,24};

int cmp(const void *a,const void *b)
{
	return( *(int*)a - *(int*)b);
}

int main()
{
	puts("Mohit Suhasaria\t19BCE2167\n\n");

	int x,*i;

	puts("Before qsort: ");
	for(int i=0;i<5;i++)
		printf("%d\t",v[i]);

	qsort(v,5,sizeof(int),cmp);

	puts("\n\nAfter qsort: ");
	for(int i=0;i<5;i++)
		printf("%d\t",v[i]);

	puts("\nEnter value to look for: ");
	scanf("%d",&x);
	i = (int*) bsearch (&x, v, 5, sizeof (int), cmp);
	if(*i!=NULL)
		printf("\nValue Found: %d",*i);
	else
		puts("Not Found");

	return 0;
}
