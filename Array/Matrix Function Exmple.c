#include<stdio.h>
#include<conio.h>
void Read(int[][10], int ,int);
void Display(int[][10], int ,int);
void main()
{
	int Mat[10][10],  row,col;
	printf("Enter Row and Column:");
	scanf("%d %d",&row, &col);
	printf("Enter elements of Mat1:\n");
	Read(Mat,row,col);	
	printf("Matrix:\n");
	Display(Mat, row, col);
	getch();
}

void Read(int Mat[10][10], int row,int col)
{
	int i,j;

	for(i=0; i< row; i++)
	{
		for(j=0; j<col; j++)
		{
			scanf("%d", &Mat[i][j]);
		}
	}
}
void Display(int Mat[10][10], int row,int col)
{
	int i,j;
	for(i=0; i< row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%d\t", Mat[i][j]);
		}
		printf("\n");
	}	
}


	
	
	

