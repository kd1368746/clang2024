#include<stdio.h>
main()
{
	int a=5, b=3,work;
	printf("%d,%d\n", a, b);
	printf("����ւ���\n");
	work = a;
	a = b;
	b = work;
	printf("%d,%d\n", a, b);
 }