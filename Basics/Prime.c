#include<stdio.h>
#include<conio.h>
void main()
{
	int num, i, count = 0;
	printf("Enter a number");
	scanf("%d", &num);
	for(i=1; i<=num; i++)
	{
		if(num %i ==0)
		{
			count++;
		}
	}
	if(count == 2)
	{
		printf("Prime");
	}

	getch();
}
