#include<stdio.h>
main()
{
	int i, goukei;
	//�z��̐擪�v�f���̂ݏȗ�/
	int a[][3] = { {10,20,30},{1,2,3} };
	for (goukei = 0, i = 0; i <= 2; i++) {
		printf("a[0][%d]=%d\n", i, a[0][i]);
		goukei += a[0][i];
	}
	printf("�O�s�ڂ̍��v=%d\n\n", goukei);
	for (goukei = 0, i = 0; i <= 2; i++) {
		printf("a[0][%d]=%d\n", i, a[0][i]);
		goukei += a[0][i];
	}
	printf("�P�s�ڂ̍��v=%d\n", goukei);
}