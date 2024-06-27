#include<stdio.h>
main()
{
	int num, i;
	printf("数は？");
	scanf("%d", &num);
	do {                   //　iの数分ループする
		i = 0;
		do {　　　　　　　//　５回分ループする
			printf("*");
			i++;
		} while (i < 5);
		printf("\n");
		num--;
	} while (num > 0);
}