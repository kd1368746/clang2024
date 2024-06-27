#include<stdio.h>
main()
{
	char data[10] = "Orange";
	char* p = "Apple";
	char* p_data;
	p_data = data;
	printf("data[]=");
	while (*p_data) {
		putchar(*p_data++);
	}
	printf("\n*p=");
	while (*p) {
		putchar(*p++);
	}
	putchar('\n');
}