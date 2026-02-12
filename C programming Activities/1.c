#include<stdio.h>

struct person
{
char name[30];
int age;
char gender[30];
float money;
};
struct person p, *q; 

void main()
{
q = &p;
	printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2  ENTER NEW CLIENT RECORD  \xB2\xB2\xB2\xB2\n");
	printf("\n\n\t\t\tName: ");
	gets(p.name);
	printf("\t\t\tAge: ");
	scanf("%d",&p.age); scanf("%c");
	printf("\t\t\tGender: ");
	gets(p.gender);

	printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2    DISPLAY PERSON DATA    \xB2\xB2\xB2\xB2");
	printf("\nName: %s",p.name);
	printf("\nAge: %d",p.age);
	printf("\nGender: %s",p.gender);

}
