#include<stdio.h>
void shisoku(int x, int y, int *wa, int *sa, int *seki, int *syou);
main()
{
	int a, b, c, d, e,f;
	printf("���l�H�F");
	scanf("%d", &a);
	printf("���l�H�F");
	scanf("%d", &b);
	shisoku(a, b, &c, &d, &e, &f);
	puts("���l�Ɛ��l�̎l�����Z");
	printf("wa=%d sa=%d seki=%d syou=%d\n", c, d, e, f);
}
void shisoku(int x, int y, int *wa,int *sa,int *seki,int *syou)
{
	*wa = x + y;
	*sa = x - y;
	*seki = x * y;
	*syou = x / y;
	return;
}
