//This program was created by Jessel Rome Sajulga from CEA_CPE_1A_1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{	
	char s1[100], s2[100], *p;
	int i, c;
	
	printf("Hello, Good Day!\n");
	printf("This program was designed for strings, string concatenation and getting the length of a string.\n");
	printf("Enter the first string: ");
	gets(s1);
			
	printf("Enter the second string: ");
	gets(s2);
	
	for(i=0; s1[i]!= '\0'; i++);
	for(c=0; *(s2+c)!= '\0'; c++);
	
	printf("First string: %s \n", s1);
	printf("Second string: %s \n", s2);	
	
	strcat(s1,s2);
	
	printf("Third string: %s \n", s1);
	
	printf("Length of First string: %d\n", i);
	printf("Length of Second string: %d\n", c);
		
	for(p=s1, i=0; *p++!='\0'; i++);
	
	printf("Length of Third string: %d", i);
}

