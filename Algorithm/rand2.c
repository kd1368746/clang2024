#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a,b,c;

	srand(time(0));
	a = rand() % 6 + 1;
	b = rand() % 6 + 1;
	c = rand() % 6 + 1;
	printf("�T�C�R����%d,%d,%d�ł�\n", a,b,c);
}