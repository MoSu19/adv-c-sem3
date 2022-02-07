#include<stdio.h>
#include<string.h>
#include<stdbool.h>

typedef struct{
char name[10];
char school[10];
float gp;
bool hostel;
char reg[10];
bool volunteer;
int vol_hrs;
char position[10];
bool attendance;
}student;

void swap(float *xp, float *yp)
{
    float temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(float arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)

       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}
int main()
{
	puts("\nMohit Suhasaria\t19BCE2167\n\n");

	student s[10];

	for(int i=0;i<10;i++)
	{
		strcpy(s[i].name,"XYZ");
		strcpy(s[i].school,"SCOPE");
		strcpy(s[i].reg,"19BCE010");
		s[i].gp=1.0+(float)i;

		if(i%2==0)
		{
			s[i].hostel=true;
			s[i].volunteer=true;
			s[i].vol_hrs=20+i;
			strcpy(s[i].position,"Member");
			s[i].attendance=false;
		}
		if(i%2!=0)
		{
			s[i].hostel=false;
			s[i].volunteer=false;
			s[i].vol_hrs=0;
			strcpy(s[i].position,"Board");
			s[i].attendance=true;
		}
	}

	int score[10];
	float cgsort[10];
	int count=0;

	for(int i=0;i<10;i++)
		{
			score[i]=0;

			cgsort[i]=s[i].gp;
			if(s[i].volunteer)
				count++;
		}
	int *volsort = (int*)malloc(count*sizeof(int));
	int k=0;
	for(int i=0;i<10;i++)
	{
		if(s[i].volunteer)
			{
				volsort[k]=s[i].vol_hrs;
				k++;
			}
	}
	bubbleSort(cgsort,10);
	bubbleSort(volsort,count);

	for(int i=0;i<10;i++)
	{
		if(s[i].attendance)
			score[i]+=5;		//full attendance points

		if(strcmp(s[i].position,"Board"))
			score[i]+=10;					//Board member points

		if(strcmp(s[i].position,"Member"))
			score[i]+=5;					//Member points

		for(int j=0;j<10;j++)
		{
			if(cgsort[i]==s[j].gp)
				score[j]+=(1+i);		//cgpa points
		}
	}
	for(int i=count-1;i>=0;i--)
	{
		for(int j=0;j<10;j++)
		{
			if(volsort[i]==s[j].vol_hrs)
				score[j]+=(10-((count-1)-i));	//volunteer points
		}
	}

	int max=0;
	for(int i=0;i<10;i++)
	{
		if(score[i]>max)
			max=score[i];
	}

	for(int i=0;i<10;i++)
		if(score[i]==max)
			printf("\nBest outgoing student for 2021: %s%d\t%s%d\nScore: %d\n",s[i].name,i,s[i].reg,i,score[i]);

	free(volsort);
	return 0;
}
