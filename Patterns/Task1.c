#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char txt[10];// char txt[10] = "NEPAL";
	int len, i,j;
	printf("Enter string:\n");
	gets(txt);
	len = strlen(txt);
	printf("\nThe Pattern is:\n\n");
	for(i=0; i<len; i++)
	{
		for(j =0; j<len; j++)
		{
		//	if (i>=j)
			printf("%c ",txt[j]);
		}
		printf("\n");
	}
}
