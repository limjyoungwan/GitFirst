#include <stdio.h>
#include <stdlib.h>
#include <cstring>

int main()
{
	char number[30] = "Hello world";
	char a[30];
	strcpy(a, number);
	printf("%s", a);
	return 0;
}