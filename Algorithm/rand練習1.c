#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a;

	srand(time(0));
	a = rand() %41+10;
	printf("—”%d\n", a);
}