#include<stdio.h>
main()
{
	int i, a[6] = { 11,22,33,44,55,66 };
	float b[4] = { 11.1,22.2,33.3,44.4 };
	int* p_a;
	int a_sum;
	float* p_b;
	float b_sum;
	a_sum = 0;
	p_a = a;
	for (i = 0; i < 6; i++) {
		a_sum += *p_a;
		p_a++;
	}
	printf("配列a　合計＝%d 平均＝%.3f\n", a_sum, a_sum / 6);
	b_sum = 0;
	p_b = b;
	for (i = 0; i < 4; i++) {
		*p_b = b_sum;
		p_b++;
	}
	printf("配列ｂ　合計＝%.3f 平均＝%.3f\n", b_sum, b_sum / 4);
}