#include<stdio.h>
#include<conio.h>
struct time
{
	int hrs;
	int min;
	int sec;
};
struct time ct, pt, sum;

void main()
{
	printf("Enter present time: hrs: min: sec\n");
	scanf("%d %d %d",&ct.hrs, &ct.min, &ct.sec);
	printf("Enter past time: hrs: min: sec\n");
	scanf("%d %d %d",&pt.hrs, &pt.min, &pt.sec);
	
	sum.sec = ct.sec + pt.sec;
	sum.min = ct.min + pt.min;
	sum.hrs = ct.hrs + pt.hrs;	
	if(sum.sec>=60)
	{
		sum.sec = sum.sec - 60;
		sum.min =  sum.min +1;
	}
	

	if(sum.min>=60)
	{
		sum.min = sum.min - 60;
		sum.hrs =  sum.hrs +1;
	}

	
	
	printf("\nAddition between two time is:\n%d hrs: %d min : %d sec \n",sum.hrs, sum.min, sum.sec);
	getch();
}
