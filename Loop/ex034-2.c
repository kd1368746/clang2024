#include<stdio.h>
main()
{
	int num, i;
	printf("���́H");
	scanf("%d", &num);
	do {                   //�@i�̐������[�v����
		i = 0;
		do {�@�@�@�@�@�@�@//�@�T�񕪃��[�v����
			printf("*");
			i++;
		} while (i < 5);
		printf("\n");
		num--;
	} while (num > 0);
}