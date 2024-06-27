#include<stdio.h>
main()
{
	int i,j;
	printf("®”F");
	scanf("%d", &i);
	for (j = 0; j < 10 + 1; j++) {
		printf("%d ", i + j);
	}
}