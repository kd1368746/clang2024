#include<stdio.h>
main()
{
	char a;
	printf("小文字を入力");
	scanf("%c" ,&a);
	printf("大文字文字=%C\n", a -0x20);
}