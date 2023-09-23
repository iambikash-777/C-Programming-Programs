#include<stdio.h>
#include<conio.h>
void main()
{
	int Mat1[3][3],Mat2[3][3],Mat3[3][3],row=3,col=3,i,j;
	printf("Enter elements of Mat1:\n");
	for(i=0; i< row; i++)
	{
		for(j=0; j<col; j++)
		{
			scanf("%d", &Mat1[i][j]);
		}
	}
	
	printf("Enter elements of Mat2:\n");
	for(i=0; i< row; i++)
	{
		for(j=0; j<col; j++)
		{
			scanf("%d", &Mat2[i][j]);
		}
	}
	
	
	for(i=0; i< row; i++)
	{
		for(j=0; j<col; j++)
		{
			Mat3[i][j]= Mat1[i][j] + Mat2[i][j];
		}
	}
	
	
	
	printf("Sum of Matrix is: \n");
	for(i=0; i< row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%d\t", Mat3[i][j]);
		}
		printf("\n");
	}
}
