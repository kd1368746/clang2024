#include<stdio.h>
main()
{
	int a[3][5] = { {0,1,2,3,4},{5,6,7,8,9},{10,11,12,13,14} };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			if(j<4){
				printf("%d", a[i][j]);
			}
			else {
				printf("%d\n", a[i][j]);
			}
		}
	}
}