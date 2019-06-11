#include <stdio.h>
#include <stdlib.h>

void swap(int * a, int * b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

int main()
{
	/*
	int size;
	scanf("%d", &size);
	int * a = (int*)malloc(sizeof(int) * 3);

	for (int i = 0; i < size; i++)
	{
		scanf("%d", a + i);
	}
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += *(a + i);
	}
	printf("%d\n", sum);
	free(a);
	*/
	int a = 2;
	int b = 3;
	swap(&a, &b);
	printf("%d %d", a, b);
	return 0;
}