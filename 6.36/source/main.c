#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void RevStrImp(char* a, char *b)
{
	if (a >= b) return;
	char t = *a;
	*a = *b;
	*b = t;

	RevStrImp(a + 1, b - 1);
}

void RevStr(char* a)
{
	RevStrImp(a, a + strlen(a) - 1);
}

int main()
{

	char zBuffer[255];

	printf("Please input a string:");

	gets(zBuffer);

	RevStr(zBuffer);


	printf("Rev str:%s\n", zBuffer);

	system("pause");
	return(0);
}
