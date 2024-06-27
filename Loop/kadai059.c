#include<stdio.h>
main()
{
	int i,j,k,l;
	for (i = 1; i < 9 + 1; i++) {
		printf(" %d  ", i);
	}
	printf("\n=======================================\n");
		for (j = 1; j < 9 + 1; j++) {
			printf("\n%d |", j);
			for (k = 1; k < 10; k++) {
				printf("%d  ", j*k);
			}

		}
}