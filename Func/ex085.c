#include<stdio.h>
void renketu(char* s1, char* s2);
main()
{
	char a[256], b[256];
	printf("a配列：");
	gets(a);
	printf("b配列：");
	gets(b);
	renketu(a, b);
	printf("a配列：%s\n", a);
}
void renketu(char s1, char s2)
{
	int i, j;
	for (i = 0; *(s1 + i) != '\0'; i++);
	for (j = 0; *(s1 + i) = *(s2 + j); i++, j++);
}