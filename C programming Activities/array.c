#include <stdio.h>

void main()
{
	int matrix[2][3]={5,12,-7,8,0,16};
	int i,j; // i is the row index and j is the column index. // displaying initial values of all array elements
	printf("\nINITIAL VALUES:");
	for (i=0 ; i<2 ; i++) // 2 iterations for 2 rows
		{
	for (j=0 ; j<3 ; j++) // 3 iterations for 3 columns
	{
	printf("\nArray element matrix[%d][%d] = %d", i, j, matrix[i][j]);
		}
	}
// assigning new values to some array elements
	matrix[0][1]=33;
	matrix[1][0]=112;
	matrix[1][2]=-14;
// displaying new values of all array elements
		printf("\n\nNEW VALUES:");
		for (i=0 ; i<2 ; i++) // 2 iterations for 2 rows
	{
		for (j=0 ; j<3 ; j++) // 3 iterations for 3 columns
	{		
		printf("\nArray element matrix[%d][%d] = %d", i, j, matrix[i][j]);
		}	
	}
}
