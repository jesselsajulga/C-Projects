//This program was created by Jessel Rome Sajulga from CEA_CPE_1A_1
#include <stdio.h>
#include <math.h>

void power(int x, int y, double *p2)
{
	int i;
	double res;
	
	for (res=1; res <= y; y++)
	{
		res = res * x;
	}
	
	for (res=0; res > y; y++)
	{
		res = res / x;
	}
	*p2 = res;
	return;
}

main()
{

	int x, y;
	double p1;
	do
	{
		printf("This program was made to compute power of a number using iterative function.\n");
		printf("Enter positive value of the base:\n-> ");
		scanf("%d", &x);
		
	}while(x<0);
		
		printf("Enter value of the exponent (may be positive, negative or zero):\n-> ");
		scanf("%d", &y);
		
		power(x,y,&p1);
	
		printf("The result of the computation: \n%d to the power of %d is equals to %.2lf.", x,y,p1);	
}


