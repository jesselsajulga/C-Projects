//This program was created by Jessel Sajulga from CPE_1A
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
	int convert;
	double Centimeters, Feet, Yard;
	double Celsius, Fahrenheit;
	
	printf("This program is to compute and convert mathematical problems.\n");
	printf("Choose the following tasks you want to compute or convert.\n");
	printf("1. Convert Centimeters to Feet and Yard\n2. Convert Celsius to Fahrenheit.\n->");
	scanf("%d", &convert);
	
	switch(convert)
	{
		case 1: 				
			printf("Let's convert Centimeters to Feet and Yard.\n");
			printf("Enter the length of centimeters to convert: ");
			scanf("%lf",&Centimeters);
			
			Feet = Centimeters / 30.48;
			Yard = Centimeters / 91.44;
			
			printf("Centimeters to Feet: %lf\n", Feet);
			printf("Centimeters to Yard: %lf\n", Yard);
			break;
		case 2:
			printf("Let's convert Celsius to Fahrenheit.\n");
			printf("Enter the temperature in Celsius: ");
			scanf("%lf", &Celsius);
			
			Fahrenheit = (9.0 / 5.0 * Celsius) + 32;
			
			printf("Celsius to Fahrenheit: %lf\n", Fahrenheit);
			break;
		default:
			printf("There is no option for that.");
			break;
	}
	
}
