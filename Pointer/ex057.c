#include<stdio.h>
main()
{
	int tbl[3][3] = { {10,20,30},{40,50,60},{70,80,90} };
	int* p_tbl, i;
	p_tbl = tbl[0];
	printf("�񎟌��z��tbl�̓��e\n");
	for (i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", *p_tbl++);
		}
		printf("\n");
	}
}   
