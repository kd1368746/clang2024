#include<stdio.h>
#define N 5
main()
{
	int d[5] = { 30,7,25,16,10 };
	int i, j, w;

	printf("ソート前:");
	for (i = 0; i < N; i++) {
		printf("%d ",d[i]);
	}
	printf("\n");
	for (i = N - 1; i > 0; i--) {
		for (j = 0; j < i;j++) {
			if (d[j] > d[i]) {
				w = d[j];
				d[j] = d[j + 1];
				d[j + 1] = w;
			}
		}
	}
	printf("\nソート後\n");
	for (i = 0; i < N; i++) {
		printf("d[%d]:%d\n",i, d[i]);
	}
}