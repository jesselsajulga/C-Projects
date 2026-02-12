//This program was created by Jessel Sajulga from CPE_1A
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
	int shape; 
	
	printf("This program is to compute the area and perimeter of shapes.\n");
	printf("What shape do you want to compute? Input the number of your chosen shape.\n");
	printf("Available shapes: \n1. Rectangle\n2. Square\n3. Circle\n4. Right Triangle\n-> ");
	scanf("%d",&shape);
	
	if(shape==1){
		
		float length, width, area, perimeter;
		
		printf("Let's compute the area and perimeter of rectangle.\n");
		printf("Enter the Length of the Rectangle: ");
		scanf("%f", &length);
		printf("Enter the Width of the Rectangle: ");
		scanf("%f", &width);
		
		area = length * width;
		perimeter = (length + width) * 2;
		
		printf("Area : %f\n", area);
		printf("Perimeter : %f\n", perimeter);
		
	}
	else if(shape==2){
		
		float side, area, perimeter; 
		
		printf("Let's compute the area and perimeter of square.\n");
    	printf("Enter the Length of Side : "); 
    	scanf("%f", &side); 
    
    	area = side * side; 
    	perimeter = 4 * side; 
    
    	printf("Area of Square : %f\n", area); 
    	printf("Perimeter of Square : %f\n", perimeter); 
    	
	}
	else if(shape==3){
		
		float rad;
		double PI = 3.1416, area, circumference;
		
		printf("Let's compute the area and circumference of circle.\n");
		printf("Enter Radius of Circle: ");
		scanf("%f", &rad);
			
		area = PI * rad * rad;
		circumference = 2 * PI * rad;
   		
		printf("Area of circle : %lf \n", area);
		printf("Circumference : %lf \n", circumference);
		
	}
	else if(shape==4){
		
		float a, b, res;
		double hypotenuse, area, perimeter;
	
		printf("Let's compute the area and perimeter of right triangle.\n");
		printf("Enter the Leg A of the Right Triangle: ");
		scanf("%f", &a);
		printf("Enter the Leg B of the Right Triangle: ");
		scanf("%f", &b);
	
		area = a * b / 2;
		hypotenuse = (a * a) + (b * b);
		res = sqrt(hypotenuse);
		perimeter = a + b + sqrt(hypotenuse);
	
		printf("Area: %lf \n", area);
		printf("Hypotenuse: %f \n", res);
		printf("Perimeter: %lf", perimeter);		
		
	}
	else{
		printf("No shape exist\n");
	}
		
}

	
	
