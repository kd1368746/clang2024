#include<stdio.h>
main()
{
	int i;
	float j;
	printf("整数(-999で終了)：");
	scanf("%d", &i);
	j = 0;
	while (i != -999) {
		j += i;
		printf("整数(-999で終了):");
		scanf("%d", &i);
	}
	printf("合計＝%d\n平均＝%.2f\n", j, j / 4);
}