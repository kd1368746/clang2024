#include<stdio.h>
main()
{
	int i;
	printf("����(-999�œ��͏I��)�F");
	scanf("%d", &i);
	while (i != -999) {
		printf("�W�i����%o 16�i����%x\n", i, i);
		printf("����(-999�œ��͏I��):");
		scanf("%d", &i);
	}
	printf("\n");
}