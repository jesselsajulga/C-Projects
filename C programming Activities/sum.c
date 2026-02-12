#include <stdio.h>

int main()
{
	int x,y,z;
	
	printf("This program computes the sum of 2 integers \n");
	printf("Enter the 1st integer, x: ");
	scanf("%d",&x);
	printf("Enter the 2nd integer, y: ");
	scanf("%d",&y);
	z=x+y;
	printf("The sum of %d and %d is %d.",x,y,z);
	
	return 0;
}
