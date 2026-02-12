//This program was created by Jessel Rome Sajulga from CEA_CPE_1A_1
#include <stdio.h>

void main() 
{
    int rowA, columnA, rowB, columnB, i, j, k;
    int mA[10][10], mB[10][10], mC[10][10];
	
	printf("Good day!\n");
	printf("This program was made to multiply matrices.\nLet's get started!\n");
	printf("Enter the value of column(s) in matrix A (maximum of 10).\n->");
    scanf("%d", &columnA);
    printf("Enter the value of row(s) in matrix A (maximum of 10).\n->");
    scanf("%d", &rowA);
    printf("Enter the value of column(s) in matrix B (maximum of 10).\n->");
    scanf("%d", &columnB);
	printf("Enter the value of row(s) in matrix B (maximum of 10).\n->");
    scanf("%d", &rowB);
   
    if (columnA != rowB) 
	{
        printf("Matrix cannot be multiplied. The rows of Matrix B should be equal to columns in Matrix A.\n");
    } 
	else 
	{
        printf("Enter your wanted elements of Matrix A:\n");
        for (i = 0; i < rowA; i++) 
		{
            for (j = 0; j < columnA; j++) 
			{
                scanf("%d", &mA[i][j]);
            }
        }

        printf("Enter your wanted elements of Matrix-B:\n");
        for (i = 0; i < rowB; i++) 
		{
            for (j = 0; j < columnB; j++) 
			{
                scanf("%d", &mB[i][j]);
            }
        }
        
        printf("Output values entered in the Matrix A:\n");
        for (i = 0; i < rowA; i++) 
		{
            for (j = 0; j < columnA; j++) 
			{
                printf("%d\t", mA[i][j]);
            }
            printf("\n");
        }
        
        printf("Output values entered in the Matrix B:\n");
        for (i = 0; i < rowB; i++) 
		{
            for (j = 0; j < columnB; j++) 
			{
                printf("%d\t", mB[i][j]);
            }
            printf("\n");
        }
        
        for (i = 0; i < rowA; i++) 
		{
            for (j = 0; j < columnB; j++) 
			{
                mC[i][j] = 0;
                for (k = 0; k < rowB; k++) 
				{
                    mC[i][j] += mA[i][k] * mB[k][j];
                }
            }
        }

        printf("The result of the multiplication of the two matrices is:\n");

        for (i = 0; i < rowA; i++) 
		{
            for (j = 0; j < columnB; j++) 
			{
                printf("%d\t", mC[i][j]);
            }
            printf("\n");
        }
    }
}

