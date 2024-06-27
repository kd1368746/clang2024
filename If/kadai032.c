#include<stdio.h>
main()
{
	int i, j;
	printf("整数？：");
	scanf("%d", &i);
	if (i % 2) {
		printf("その数は「奇数」です\n");
	}
	else {
		printf("その数は「偶数」です\n");
	}
}