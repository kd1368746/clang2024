#include<stdio.h>
main()
{
	char A;
	printf("一文字入力：");
	scanf("%c", &A);
	if (A >= 'a' && A <= 'z'||A>='A'&&A<='Z') {
		printf("アルファベットです");
	}
	else {
		printf("エラー！！\n");
	}
}