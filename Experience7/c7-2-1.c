/*c7-2-1.c*/
#include <stdio.h>
int main()
{
	int i=0, a[11];
	for (i = 1; i <= 10; i++)
    /************found***********/
		a[i-1] = i;
	printf("arra:\n");
	for (i = 0; i < 10; i++)
		printf("%5d", a[i]);
	printf("\n");
    for (i = 0; i < 5; i++)
    /************found***********/
		a[9 - i] = i+1;
	printf("对折后arra:\n");
	for (i = 0; i < 10; i++)
		printf("%5d", a[i]);
	printf("\n");
	return 0;
}