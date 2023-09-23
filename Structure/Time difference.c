#include<stdio.h>
#include<conio.h>
struct time
{
	int hrs;
	int min;
	int sec;
};
struct time ct, pt, diff;

void main()
{
	printf("Enter present time: hrs: min: sec\n");
	scanf("%d %d %d",&ct.hrs, &ct.min, &ct.sec);
	printf("Enter past time: hrs: min: sec\n");
	scanf("%d %d %d",&pt.hrs, &pt.min, &pt.sec);

	if(pt.sec>ct.sec)
	{
		ct.sec = ct.sec + 60;
		ct.min = ct.min -1;
	}
	diff.sec = ct.sec - pt.sec;
	
	if(pt.min > ct.min)
	{
		ct.min = ct.min + 60;
		ct.hrs = ct.hrs -1;
	}
	diff.min = ct.min - pt.min;
	if(pt.hrs > ct.hrs)
	{
		ct.hrs = ct.hrs +24;

	}
	diff.hrs = ct.hrs - pt.hrs;
	
	printf("\nDifference between present and past time is:\n%d hrs: %d min : %d sec \n",diff.hrs, diff.min, diff.sec);
	getch();
}
