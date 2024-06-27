#include<stdio.h>
#define N 5
main()
{
	int i, j,w;
	int d[N] = { 30,7,25,16,10 };

	printf("ソート前\n");
	for (i = 0; i < N; i++) {
		printf("d[%d]:%d\n", i, d[i]);
	}
	printf("\n");
	for (i = 0; i < N - 1; i++) {
		for (j = i + 1; j < N; j++) {
			if (d[i] > d[j]) {
				w = d[i];
				d[i] = d[j];
				d[j] = w;
			}
		}
	}
	printf("ソート後：");
	for (i = 0; i < N; i++) {
		printf("%d ", d[i]);
	}
}