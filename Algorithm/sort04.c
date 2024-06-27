#include<stdio.h>
#define N 8
main()
{
	int d[N] = { 70,60,80,50,20,30,10 };
	int i, j, w, gap;
	//gap = N / 2;
	gap = 1;
	while (gap > 0) {
		for(i = gap; i < N; i++) {
			for (j = i - gap; j >= 0; j -= gap) {
				int k;
				for (k = 0; k < N; k++) {
					printf("%d ", d[k]);
				}
				printf("\n");
				if (d[j + gap] < d[j]) {
					w = d[j];
					d[j] = d[j + gap];
					d[j + gap] = w;
				}
				else {
					break;
				}
			}
		}
		gap = gap / 2;
		printf("-----------------------\n");
	}
	for (i = 0; i < N; i++) {
		printf("%d ", d[i]);
	}
}