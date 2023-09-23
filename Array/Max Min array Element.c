#include<stdio.h>
#include<conio.h>
void main()
{
	int num[100],i,n,max,min;
	printf("How many elements?\n");
	scanf("%d",&n);
	printf("\nEnter %d Elements:\n",n);
	
	for(i=0; i<n; i++)
	{
		scanf("%d",&num[i]);
	}
	
	printf("\nElements of array are:\n");
	for(i=0; i<n; i++)
	{
		printf("%d\t",num[i]);
	}
		
	max = min = num[0];
	for(i=0; i<n; i++)
	{
		max= (max>num[i])? max: num[i];
		min= (min<num[i])? min: num[i];
	}
	printf("\n\nMax = %d\nMin = %d", max,min);
	getch();
		
}
