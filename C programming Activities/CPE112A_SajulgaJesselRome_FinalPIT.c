#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <string.h>	

enum decision {Write=1,Read=2,Append=3,Student=4,Exit=5};
enum decision s;

struct date
{
	char month[100];
	int day, year;
};

struct account
{
	char status[100];
	char email[100];
	char username[100];
	char prob[100];
};

struct person
{
    char fname[100];
    char lname[100];
    int age;
    char gender[10];
    double number;
    struct account info;
    struct date bday;
};

void write()
{
	char pass[100];
	int i;
	char ch;
    struct person p, *q;
    FILE *f;
    char choice1;
    char choice2;
    int sel;
	char ord;

    q = &p;

    if ((f = fopen("account.txt", "w")) == NULL)
	{
		puts("cannot open file");
		exit(1);
	}
    printf("\t\t\t\t\t-----------------------------------");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2  ENTER NEW CLIENT RECORD  \xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t-----------------------------------");
    printf("\n\n\t\t\t-------------------------------------------------------------------");
    printf("\n\t\t\tFirst name: ");
    scanf("%s", &p.fname);
    printf("\t\t\tLast name: ");
    scanf("%s", &p.lname);
    printf("\t\t\tAge: ");
    scanf("%d", &p.age);
    scanf("%c");
    printf("\t\t\tMonth: ");
	scanf("%s", &p.bday.month);
	printf("\t\t\tDay: ");
	scanf("%d",&p.bday.day);
	printf("\t\t\tYear: ");
	scanf("%d", &p.bday.year);
    printf("\t\t\tGender: ");
    scanf("%s", &p.gender);
    printf("\t\t\tPhone Number: ");
    scanf("%lf", &p.number);
    scanf("%c");
    printf("\t\t\tEmail: ");
	scanf("%s", &p.info.email);
	printf("\t\t\tUsername: ");
	scanf("%s", &p.info.username);
	printf("\t\t\tPassword: ");
	for(i=0;i<100;i++)
	{
    ch = getch();
    if(ch == 8 && i > 0)
    {
        printf("\b \b");
        i -= 2;
    }
    else if(ch == 13)
    {
        break;
    }
    else
    {
        pass[i] = ch;
        printf("*");
    }
	}
	pass[i] = '\0';
	scanf("%*c");
	printf("\n\t\t\t-------------------------------------------------------------------");
	
	printf("\n\n\t\t\t\t\t-----------------------------------");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2         QUESTIONS         \xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t-----------------------------------");
    printf("\n\n\t\t\tQuestions regarding to Account Status:");
    printf("\n\n\t\t\tIs the number still in use? (y/n)");
    scanf(" %c", &choice1);
    if (choice1 == 'y' || choice1 == 'Y')
    {
        printf("\t\t\tThe number is active");
    }
    else
    {
        printf("\t\t\tThe number is inactive");
    }

    printf("\n\t\t\tIs the email still in use? (y/n)");
    scanf(" %c", &choice2);
    if (choice2 == 'y' || choice2 == 'Y')
    {
        printf("\t\t\tThe email is active");
    }
    else
    {
        printf("\t\t\tThe email is inactive");
    }
    
    printf("\n\n\t\t\tQuestions regarding to Password Status:");
	printf("\n\n\t\t\tIs the number still in use? (y/n)");
    scanf(" %c", &ord);
    if (ord == 'y' || ord == 'Y')
    {
        printf("\n\t\t\tThe password can be change/reset");
    }
    else
    {
        printf("\n\t\t\tThe password can not be change/reset");
    }
    
    printf("\n\n\t\t\t\t\t-----------------------------------");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2    DISPLAY PERSON DATA    \xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t-----------------------------------");
    if (choice1 == 'n' && choice2 == 'n' )
    {
        strcpy(p.info.status, "Deactivated");
        fprintf(f,"\nDeactivated",q->info.status);
    }
    else if (choice1 == 'y' && choice2 == 'y')
    {
        strcpy(p.info.status, "Active");
   		fprintf(f,"\nActive",q->info.status);
    }
    else if (choice1 == 'y' && choice2 == 'n')
    {
        strcpy(p.info.status, "Locked");
   		fprintf(f,"\nLocked",q->info.status);
    }
    else
    {
        strcpy(p.info.status, "Inactive");
        fprintf(f,"\nInactive",q->info.status);
    }
    printf("\n\n\t\t\tAccount Status: %s", p.info.status);
    
    if (ord == 'n')
    {
        strcpy(p.info.prob, "Cannot be Change/Reset");
        fprintf(f,"\nUnchangeable",q->info.prob);
    }
    else
    {
        strcpy(p.info.prob, "Can be Change/Reset");
        fprintf(f,"\nChangeable",q->info.prob);
    }
    printf("\n\t\t\tPassword Status: %s", p.info.prob);
    
	printf("\n\t\t\tName: %s %s", p.fname, p.lname);
    printf("\n\t\t\tAge: %d", p.age);
    printf("\n\t\t\tBirthdate: %s %d, %d", p.bday.month, p.bday.day, p.bday.year);
    printf("\n\t\t\tGender: %s", p.gender);
    printf("\n\t\t\tNumber: %.0lf", p.number);
    printf("\n\t\t\tEmail: %s", p.info.email);
    printf("\n\t\t\tUsername: %s", p.info.username);
	
    fprintf(f,"\n%s", q->fname);
    fprintf(f,"\n%s", q->lname);
    fprintf(f,"\n%d", q->age);
    fprintf(f,"\n%s",q->bday.month);
	fprintf(f,"\n%d",q->bday.day);
	fprintf(f,"\n%d",q->bday.year);
    fprintf(f,"\n%s", q->gender);
    fprintf(f,"\n%.0lf", q->number);
    fprintf(f,"\n%s", q->info.email);
    fprintf(f,"\n%s", q->info.username);
    
	printf("\n\t\t\t-------------------------------------------------------------------");
    
    fclose(f);
}

void read()
{
    struct person p, *q;
    FILE *f;
    q = &p;
    char line[100];
	
	if ((f=fopen("account.txt","r"))==NULL)
	{
	puts("cannot open file");
	exit(1); 
	}
	printf("\t\t\t\t\t---------------------------------------");
	printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2  LOADING DATA FROM .txt FILE  \xB2\xB2\xB2\xB2");
	printf("\n\t\t\t\t\t---------------------------------------");
	sleep(3);
	system("cls");
	do
	{	
	fscanf(f,"\n%s",&q->info.status);
	fscanf(f,"\n%s",&q->info.prob);
	fscanf(f,"\n%s",&q->fname);
	fscanf(f,"\n%s",&q->lname);
	fscanf(f,"\n%d",&q->age);
	fscanf(f,"\n%s",&q->bday.month);
	fscanf(f,"\n%d",&q->bday.day);
	fscanf(f,"\n%d",&q->bday.year);
	fscanf(f,"\n%s",&q->gender);
	fscanf(f,"\n%lf",&q->number);
	fscanf(f,"\n%s",&q->info.email);
	fscanf(f,"\n%s",&q->info.username);
	
	printf("\n\n\t\t\t\t-----------------------------------------------");
	printf("\n\t\t\t\t\xB2\xB2\xB2\xB2          CLIENT DATA TXT FILE         \xB2\xB2\xB2\xB2");
	printf("\n\t\t\t\t-----------------------------------------------");
	
	printf("\n\t\t\t\tAccount Status: %s",p.info.status);
	printf("\n\t\t\t\tPassword Status: %s",p.info.prob);
	printf("\n\t\t\t\tName: %s, %s",p.lname, p.fname);
	printf("\n\t\t\t\tAge: %d",p.age);
	printf("\n\t\t\t\tBirthdate: %s %d, %d",p.bday.month, p.bday.day, p.bday.year);
	printf("\n\t\t\t\tGender: %s",p.gender);
	printf("\n\t\t\t\tPhone Number: %.0lf",p.number);
	printf("\n\t\t\t\tEmail: %s",p.info.email);
	printf("\n\t\t\t\tUsername: %s",p.info.username);
	printf("\n\t\t\t-------------------------------------------------------------------");
	}while(NULL != fgets(line,sizeof(line),f));
	fclose(f);
}

void append()
{
	char pass[100];
	int i;
	char ch;
    struct person p, *q;
    FILE *f;
    char choice1;
    char choice2;
    int sel;
	char ord;

    q = &p;

    if ((f = fopen("account.txt", "a")) == NULL)
    {
        puts("cannot open file");
        exit(1);
    }
    printf("\t\t\t\t\t-----------------------------------");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2  ENTER NEW CLIENT RECORD  \xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t-----------------------------------");
    printf("\n\n\t\t\t-------------------------------------------------------------------");
    printf("\n\t\t\tFirst name: ");
    scanf("%s", &p.fname);
    printf("\t\t\tLast name: ");
    scanf("%s", &p.lname);
    printf("\t\t\tAge: ");
    scanf("%d", &p.age);
    scanf("%c");
    printf("\t\t\tMonth: ");
	scanf("%s", &p.bday.month);
	printf("\t\t\tDay: ");
	scanf("%d",&p.bday.day);
	printf("\t\t\tYear: ");
	scanf("%d", &p.bday.year);
    printf("\t\t\tGender: ");
    scanf("%s", &p.gender);
    printf("\t\t\tPhone Number: ");
    scanf("%lf", &p.number);
    scanf("%c");
    printf("\t\t\tEmail: ");
	scanf("%s", &p.info.email);
	printf("\t\t\tUsername: ");
	scanf("%s", &p.info.username);
	printf("\t\t\tPassword: ");
	for(i=0;i<100;i++)
	{
    ch = getch();
    if(ch == 8 && i > 0)
    {
        printf("\b \b");
        i -= 2;
    }
    else if(ch == 13)
    {
        break;
    }
    else
    {
        pass[i] = ch;
        printf("*");
    }
	}
	pass[i] = '\0';
	scanf("%*c");
	printf("\n\t\t\t-------------------------------------------------------------------");
	
	printf("\n\n\t\t\t\t\t-----------------------------------");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2         QUESTIONS         \xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t-----------------------------------");
    printf("\n\n\t\t\tQuestions regarding to Account Status:");
    printf("\n\n\t\t\tIs the number still in use? (y/n)");
    scanf(" %c", &choice1);
    if (choice1 == 'y' || choice1 == 'Y')
    {
        printf("\t\t\tThe number is active");
    }
    else
    {
        printf("\t\t\tThe number is inactive");
    }

    printf("\n\t\t\tIs the email still in use? (y/n)");
    scanf(" %c", &choice2);
    if (choice2 == 'y' || choice2 == 'Y')
    {
        printf("\t\t\tThe email is active");
    }
    else
    {
        printf("\t\t\tThe email is inactive");
    }
    
    printf("\n\n\t\t\tQuestions regarding to Password Status:");
	printf("\n\n\t\t\tIs the number still in use? (y/n)");
    scanf(" %c", &ord);
    if (ord == 'y' || ord == 'Y')
    {
        printf("\t\t\tThe password can be change/reset");
    }
    else
    {
        printf("\t\t\tThe password can not be change/reset");
    }
    
    printf("\n\n\t\t\t\t\t-----------------------------------");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2    DISPLAY PERSON DATA    \xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\t-----------------------------------");
    if (choice1 == 'n' && choice2 == 'n' )
    {
        strcpy(p.info.status, "Deactivated");
        fprintf(f,"\nDeactivated",q->info.status);
    }
    else if (choice1 == 'y' && choice2 == 'y')
    {
        strcpy(p.info.status, "Active");
   		fprintf(f,"\nActive",q->info.status);
    }
    else if (choice1 == 'y' && choice2 == 'n')
    {
        strcpy(p.info.status, "Locked");
   		fprintf(f,"\nLocked",q->info.status);
    }
    else
    {
        strcpy(p.info.status, "Inactive");
        fprintf(f,"\nInactive",q->info.status);
    }
    printf("\n\n\t\t\tAccount Status: %s", p.info.status);
    
    if (ord == 'n')
    {
        strcpy(p.info.prob, "Cannot be Change/Reset");
        fprintf(f,"\nUnchangeable",q->info.prob);
    }
    else
	{
        strcpy(p.info.prob, "Can be Change/Reset");
        fprintf(f,"\nChangeable",q->info.prob);
	}
    printf("\n\t\t\tPassword Status: %s", p.info.prob);
    
	printf("\n\t\t\tName: %s %s", p.fname, p.lname);
    printf("\n\t\t\tAge: %d", p.age);
    printf("\n\t\t\tBirthdate: %s %d, %d", p.bday.month, p.bday.day, p.bday.year);
    printf("\n\t\t\tGender: %s", p.gender);
    printf("\n\t\t\tNumber: %.0lf", p.number);
    printf("\n\t\t\tEmail: %s", p.info.email);
    printf("\n\t\t\tUsername: %s", p.info.username);
	
    fprintf(f,"\n%s", q->fname);
    fprintf(f,"\n%s", q->lname);
    fprintf(f,"\n%d", q->age);
    fprintf(f,"\n%s",q->bday.month);
	fprintf(f,"\n%d",q->bday.day);
	fprintf(f,"\n%d",q->bday.year);
    fprintf(f,"\n%s", q->gender);
    fprintf(f,"\n%.0lf", q->number);
    fprintf(f,"\n%s", q->info.email);
    fprintf(f,"\n%s", q->info.username);
    
	printf("\n\t\t\t-------------------------------------------------------------------");
    
    fclose(f);
}


void student()
{	
	printf("\t\t\t-------------------------------------------------------------------");
	printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2  STUDENT INFORMATION  \xB2\xB2\xB2\xB2");
	printf("\n\t\t\t-------------------------------------------------------------------");
	printf("\n\t\t\t-------------------------------------------------------------------");
	printf("\n\t\t\tStudent Name: Jessel Rome Sajulga");
	printf("\n\t\t\tAge: 19");
	printf("\n\t\t\tGender: Male");
	printf("\n\t\t\tUniversity/School: University of Science and Technology of \n\t\t\tSouthern Philippines");
	printf("\n\t\t\tCourse: BSCPE");
	printf("\n\t\t\tSection: CEA_CPE_1A_1");
	printf("\n\t\t\tSubject: CPE112A");
	printf("\n\t\t\tSubject Teacher: Ma'am Juliet Cagampang");
	printf("\n\t\t\tFINAL PIT");
	printf("\n\t\t\t-------------------------------------------------------------------");
}

void main()
{
	system("color 0b");
	
	int i;
	char ch;
	int ans;
	char dec;
	char uname[100];
	char upass[100];

	printf("       \t\t\t\t\t--------------------------------------");
	printf("\n       \t\t\t\t\t\xB2\xB2\xB2\xB2  Welcome to Account Tracker  \xB2\xB2\xB2\xB2"); 
	printf("\n       \t\t\t\t\t--------------------------------------");
	
	printf("\n\n\t\t\t-------------------------------------------------------------------");
	User:
	printf("\n\t\t\tEnter username: ");
	scanf("%s", uname);
	if (strcmp(uname,"ustp")==0)
	{
	printf("\t\t\tUsername is correct\n");
	}
	else
	{
	printf("\t\t\tYou have entered an invalid username\n\n\t\t\tPlease enter username again");
	
	goto User;
	}
	
	Pass:
	printf("\n\t\t\tEnter password: ");
	for(i=0;i<100;i++)
	{
    ch = getch();
    if(ch == 8 && i > 0)
    {
        printf("\b \b");
        i -= 2;
    }
    else if(ch == 13)
    {
        break;
    }
    else
    {
        upass[i] = ch;
        printf("*");
    }
	}
	upass[i] = '\0';
	scanf("%*c");
	if(strcmp(upass,"ustp")==0)
	{
	printf("\n\t\t\tPassword is correct\n\n\t\t\tYou have successfully logged in into Account Tracker...");
	}
	else
	{
	printf("\n\t\t\tYou have entered a wrong password\n\n\t\t\tEnter your password again");
	
	goto Pass;
	}
	printf("\n\n\t\t\t-------------------------------------------------------------------");
	sleep(2);
	system("cls");
	
	do
	{
	printf("       \t\t\t\t\t--------------------------------------");
	printf("\n       \t\t\t\t\t\xB2\xB2\xB2\xB2  Welcome to Account Tracker  \xB2\xB2\xB2\xB2"); 
	printf("\n       \t\t\t\t\t--------------------------------------");
	printf("\n\t\t------------------------------------------------------------------------------------------");
	printf("\n\t\t\xB2\xB2\tThis program was made to gather data information of a user to determine	\t\xB2\xB2\n\t\t\xB2\xB2\tif the account is locked, deactivated, active and forgot password.	\t\xB2\xB2");
	printf("\n\t\t\xB2\xB2\tThis program can also read and write data from text file or to text file.\t\xB2\xB2");
	printf("\n\t\t------------------------------------------------------------------------------------------");
	printf("\n\n\t\t------------------------------------------------------------------------------------------");
	printf("\n\t\t\t\xB2\xB2\tPlease choose on the following options:\t\t\t\t\xB2\xB2");
	printf("\n\t\t\t\xB2\xB2\t\t1.Write a new file\t\t\t\t\t\xB2\xB2");
	printf("\n\t\t\t\xB2\xB2\t\t2.Read a file\t\t\t\t\t\t\xB2\xB2");
	printf("\n\t\t\t\xB2\xB2\t\t3.Append a file\t\t\t\t\t\t\xB2\xB2");
	printf("\n\t\t\t\xB2\xB2\t\t4.Student Information\t\t\t\t\t\xB2\xB2");
	printf("\n\t\t\t\xB2\xB2\t\t5.Exit the program\t\t\t\t\t\xB2\xB2");
	printf("\n\t\t------------------------------------------------------------------------------------------");
	printf("\n\n\t\t\t\t\t\tYour choice: ");
	scanf("%d",&ans);
	system("cls");
	
	switch(ans)
	{
		case Write:
			write();
			break;
		case Read:
			read();
			break;
		case Append:
			append();
			break;
		case Student:
			student();
			break;
		case Exit:
			printf("Thank you for using this program!");
			exit(0);
			break;
		default:
            printf("Invalid choice\n");
            break;			
	}
	printf("\n\n\t\t\tWould you like to make another data? (Y/N)");
	scanf(" %c",&dec);
	system("cls");
	
	}while(dec == 'y' || dec == 'Y');
	printf("Thank you for using this program!");
}
