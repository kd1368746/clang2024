#include<stdio.h>
main()
{
	int i,j, goukei;
	//�z��̐擪�v�f���̂ݏȗ�/
	int a[][3] = { {10,20,30},{1,2,3} };
	
	for (i = 0; i <= 1; i++) {
		for (goukei = 0, j = 0; j <= 2; j++) {
			printf("a[%d][%d] = %d\n", i, j, a[i][j]);
			goukei += a[i][j];
		}
		printf("%d�s�ڂ̍��v=%d\n\n", i, goukei);
	}
}