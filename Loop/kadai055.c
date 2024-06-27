#include<stdio.h>
main()
{
	char i,j;
	printf("アルファベット");
	scanf("%c", &j);
	for (i='a'&&'z'; i>j; i++) {
		printf("%c", i);
	}
}