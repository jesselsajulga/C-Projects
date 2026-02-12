#include <stdio.h>

void main()
{
	char s1[50];
	char s2[50];
	char s3[50];
	printf("Enter the first string: ");
	scanf("%s", &s1);
	int c=0;
	int i;
	for(i=0;s1[i]!='\0';i++){
		c++;
	}
	printf("Enter the second string: ");
	scanf("%s", &s2);	
	int j=0;
	int t;
	for(t=0;s2[t]!='\0';t++)
		j++;
	
	int *p;
	p = &s1, &s2; 
	
	
	
	printf("String 3 = %s%s\n", &s1, &s2);
	printf("Length of first string = %d\n", c);
	printf("Length of second string = %d\n", j);
	printf("Length of third string = %d", p);
	
}

