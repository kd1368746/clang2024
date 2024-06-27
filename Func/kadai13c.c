#include<stdio.h>
void irekae(int *ap, int *bp);
main()
{
	int a, b ;
	a = 10;
	b = 20;
	printf("関数実行前：\n");
	printf("a=%db=%d\n", a, b);
	irekae(&a,&b);
	printf("関数実行後：\n");
	printf("a=%d b=%d\n", a, b);
}
void irekae(int *ap, int *bp)
{
	int w;

	w = *ap;
	*ap = *bp;
	*bp = w;
	return;
}