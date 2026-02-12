//This program was created by Jessel Rome Sajulga from CEA_CPE_1A_1
#include <stdio.h>
#include <math.h>

double power(int x, int y)
{
	if(y==0)
	{
		return 1;
	}
	else if(y<0)
	{
		return 1/(power(x,-y));
	}
	else (y>0);
	{
		return x*power(x, y-1);
	}
}

main()
{

	double x, y;
	do
	{
		printf("This program was made to compute power of a number using recursive function.\n");
		printf("Enter positive value of the base:\n-> ");
		scanf("%lf", &x);
		
	}while(x<0);
		
		printf("Enter value of the exponent (may be positive, negative or zero):\n-> ");
		scanf("%lf", &y);
		
		printf("The result of the computation is %.2lf to the power of %.2lf is %.2lf.", x,y,power(x,y));	
}
