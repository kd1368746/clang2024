#include<stdio.h>
main()
{
	int i;
	float  sum=0, box[3];
	printf("���������");
	scanf("%f", &sum);
	sum= 0;
	i = 0;
	for (i = 0; i < 3; i++) {
		sum+=box[i];
		printf("���v��%2f�ł�   ���ς�%2f�ł�\n", sum,sum/3);
	}
}
