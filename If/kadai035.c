#include<stdio.h>
main()
{
	int i;
    printf("整数？：");
	scanf("%d", &i);
	if (0 < i) {
		printf("入力値はプラスです\n");
	}
	else {
		printf("入力値はマイナスです\n");
	}
}