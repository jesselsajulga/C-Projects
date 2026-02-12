//This program was created by Jessel Sajulga from CPE_1A
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
	char employee[50];
	double hoursworked, rateperhour, res, grossincome, taxdeduction, netincome;
	char ans;
	do
	{
	printf("\nThis program is to compute and analyze the work expenses and money from the Employees.\n");
	printf("Enter the Employee's last name: ");
	scanf("%s", &employee);
	printf("Enter the Employee's number of hours worked: ");
	scanf("%lf", &hoursworked);
	printf("Enter the Employee's rate per hour: ");
	scanf("%lf", &rateperhour);
	
	grossincome = hoursworked * rateperhour;	
	if(grossincome >= 30000)
	{		
		taxdeduction = grossincome * 0.20;
	}
	if(grossincome < 30000)
	{
		taxdeduction = grossincome * 0.10;
	}
	
	netincome = grossincome - taxdeduction;
	
	printf("\n----- Employee Information Details -----");
	printf("\nEmployee's name: %s", employee);
	printf("\nEmployee's number of hours worked: %lf", hoursworked);
	printf("\nEmployee's rate per hour: %lf", rateperhour);
	printf("\nGross Income: %lf", grossincome);
	printf("\nTax Deduction: %lf", taxdeduction);
	printf("\nNet Income: %lf", netincome);
	
	printf("\n\nWould you like to compute for another employee? (Y/N)");
	scanf(" %c", &ans);		
	
	} while (ans == 'y' || ans == 'Y');
}
