#include<stdio.h>
main()
{
	char data[15] =  "C Language";
	char data2[15];
	char* p_data;
	char* p_data2;
	p_data = data;
	p_data2 = data2;
	printf("data[]=%s\n", p_data);//%sのときはアドレス指定（\0までが表示）
	while (*p_data2++ = *p_data++);
	p_data2 = data2;
	printf("p_data[]=%s\n", p_data2);
	while (*p_data2) {
		putchar(*p_data2++);
	}
	printf("\n");
}