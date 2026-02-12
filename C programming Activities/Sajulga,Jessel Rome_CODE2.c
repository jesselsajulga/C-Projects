#include <stdio.h>
#define expNo 2

	typedef int wholenum;
	enum ops {ADD,SUB,MUL,DIV};
	enum ops op;

	struct nums { int optr,opnd1,opnd2; };
	struct nums expr[expNo] = {1,7,2,2,4,3};
	struct nums *p;
	
	char opSymb[]={'+','-','x','/'};

void main()
{
    wholenum i;
    for (i=0; i<expNo ; i++)
    {
        p = &expr[i];
        printf("%d %c %d = ",p->opnd1,opSymb[p->optr],p->opnd2);
        switch (p->optr)
        {
            case ADD : printf("%d\n",(p->opnd1) + (p->opnd2));break;
            case SUB : printf("%d\n",(p->opnd1) - (p->opnd2));break;
            case MUL : printf("%d\n",(p->opnd1) * (p->opnd2));break;
            case DIV : printf("%d\n",(p->opnd1) / (p->opnd2));break;
            default : printf("Not a valid operator\n");break;
        } // switch
    } // for loop
} // main
