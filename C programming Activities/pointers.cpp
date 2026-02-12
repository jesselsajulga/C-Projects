#include <stdio.h>

int main(){
	char s[50];
	printf("Enter string");
	gets(s);
	int c=0;
	for(int i=0;s[i]!='\0';i++){
		c++;
	}
	printf("Number of symbols == %d", c);
}

