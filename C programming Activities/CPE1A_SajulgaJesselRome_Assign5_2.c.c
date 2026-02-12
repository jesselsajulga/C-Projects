//This program was created by Jessel Rome Sajulga from CEA_CPE_1A_1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void main()
{
  	char str1[100], str2[100];
  	int i, j, len;
  	
	printf("This program was intended to make a palindrome string with an input string:\n");
	printf("Let's start now!\n");
	printf("Input the first string: ");
  	gets(str1);
  	
  	j = 0;
  	len = strlen(str1);
 
  	for (i = len - 1; i >= 0; i--)
  	{
  		str2[j++] = str1[i-1];
  	}
  	str2[i] = '\0';
 	
 	strcat(str1,str2);
  	printf("Palindrome of the string: %s", str1);
}

