//This program was created by Jessel Sajulga from CPE_1A
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{		
	int x, y, p = 1, res = 1;
	
	printf("This program is to compute the value of p by repeatedly executing p = p * x, y times.\n");
	printf("This program is more like computing the power of a number.\n");
	printf("Enter the value of x: ");
	scanf("%d", &x);
	printf("Enter the value of y: ");
	scanf("%d", &y);

	while(p <= y)
	{
		res = res * x;
		p++;
		printf("p=p*x = %d\n", res);
		
	}
	printf("Result = %d", res);
}
