#include <stdio.h>
#include <stdlib.h>

void main()
{
	int mA[10][10];
	int mB[10][10];
	int mC[10][10];
	int rowA, rowB, columnA, columnB;
	int m, p, n, res;
	
	printf("Good day!\n");
	printf("This program was made to compute matrices.\n");
	printf("Enter your wanted value of columns of the Matrix A (Maximum of 50): \n");
	scanf("%d", &columnA);
	printf("Enter your wanted value of rows of the Matrix A (Maximum of 50): \n");
	scanf("%d", &rowA);
	printf("Enter your wanted values of columns of the Matrix B (Maximum of 50): \n");
	scanf("%d", &columnB);
	printf("Enter your wanted values of row of the Matrix B (Maximum of 50): \n");
	scanf("%d", &rowB);
	
	if(rowB != columnA)
	{
		printf("Sorry! We cannot compute this problem. The rows of B and columns of A should be the same.\n");
	}

	printf("Enter your wanted elements of Matrix A.\n");
	for(m=0;m<rowA;m++)
	{
		for(n=0;n<columnA;n++)
		{
			scanf("%d", &mA[m][n]);
		}
		printf("\n");
	}
	
	printf("Matrix A.\n");
	for(m=0;m<rowA;m++)
	{
		for(n=0;n<columnA;n++)
		{
			printf("%d\t", mA[m][n]);
		}
		printf("\n");
	}
	printf("Enter your wanted elements of Matrix B.\n");
	for(m=0;m<rowB; m++)
	{
		for(n=0;n<columnB;n++)
		{
			scanf("%d", &mB[m][n]);
		}		
		printf("\n");
	}
	
	printf("Matrix B.\n");
	for(m=0; m<rowB; m++)
	{
		for(n=0;n<columnB; n++)
		{
			printf("%d\t", mB[m][n]);
	}
		printf("\n");
	}
	
	for(m=0;m<rowA;m++)
	{
		for(n=0;n<columnB;n++)
		{
			res = 0;
			for(p=0;p<columnA;p++)
			{
				res = res + mA[m][p] * mB[p][n];
				mC[m][n] = res;
			}
		}
	}
	
	printf("Result Matrix or Matrix C.\n");
	for(m=0;m<rowA;m++)
	{
		for(n=0;n<columnB;n++)
		{
			printf("%d ", mC[m][n]);
		}
		printf("\n");
	}
}
