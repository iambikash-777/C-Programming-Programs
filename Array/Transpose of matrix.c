#include<stdio.h>
#include<conio.h>
void main()
{
	int Mat[10][10],  row,col, i,j,TM[10][10];
	printf("Enter Row and Column:");
	scanf("%d %d",&row, &col);

	printf("Enter elements of Mat1:\n");
	for(i=0; i< row; i++)
	{
		for(j=0; j<col; j++)
		{
			scanf("%d", &Mat[i][j]);
		}
	}
	
	printf("Matrix:\n");
	for(i=0; i< row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%d\t", Mat[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i< col; i++)
	{
		for(j=0; j<row; j++)
		{
		
			TM[i][j]=Mat[j][i];
		}
		
	}

	
	printf("Transpose of matrix:\n");
	for(i=0; i< col; i++)
	{
		for(j=0; j<row; j++)
		{
			printf("%d\t", TM[i][j]);
		}
		printf("\n");
	}

	
}
	
	
	

