#include <stdio.h>
#include <windows.h>

void Type(const char * p)
{
	if (NULL==p)
	return;
	
	while(*p)
	{
		printf("%c\xDB", *p++);
		Sleep(90);
		printf("\b \b");
		Sleep(90);
	}
	Sleep(300);
}

int main(int argc, const char * argv[])
{
	Type("Hallo, hakdog ka.\n");
	Type("Sikeeeee...");
	Type("New Achievement. :)");
	Type("Salamat sa friend nako nga IT HAHAHAHAHAHA");
}
