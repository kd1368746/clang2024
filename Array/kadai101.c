#include<stdio.h>
main()
{
	int i, j;
	int a[5][5] = { {1,2,3,4,5}
		,{6,7,8,9,10}
	,{11,12,13,14,15}
	,{16,17,18,19,20}
	,{21,22,23,24,25} };
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
				if(j<4){
				printf("%d", a[i][j]);
				}
				else {
					printf("%d\n", a[i][j]);
				}
		}
	}
}