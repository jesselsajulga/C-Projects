#include <stdio.h>
#include <stdlib.h>

struct student
{
	double student_id;
    char fname[50];
    char lname[50];
    char course[50];
    int year_level;
};

	struct student p, *q;
    FILE *f;
    char choice;
    
void main() {

    q=&p;
    if ((f = fopen("stud.txt", "a")) == NULL)
    {
        puts("cannot open file");
        exit(1);
    }

    printf("Enter student ID: ");
    scanf("%lf", &p.student_id);
    fprintf(f, "\n%.0lf", q->student_id);

    printf("Enter first name: ");
    scanf("%s", &p.fname);
    
    printf("Enter last name: ");
    scanf("%s", &p.lname);
    fprintf(f,"\n%s", q->fname);
    fprintf(f,"\n%s", q->lname);

    printf("Enter course: ");
    scanf("%s", &p.course);
    fprintf(f, "\n%s",q->course);

    printf("Enter year level: ");
    scanf("%d", &p.year_level);
    fprintf(f, "\n%d", q->year_level);
    
    printf("Data saved successfully");
    
    fclose(f);
}
