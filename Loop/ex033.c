#include<stdio.h>
main()
{
	int i, sum, num;
	
	printf("数は？");
	scanf("%d", &num);
	sum = 0;
	i = 0;
	for (num= 0,i=0;  num= -999; i++) {
		sum += num;

		printf("数は？");
		scanf("%d", &sum);
	}
	printf("合計＝%d\t平均＝%d\n", sum, (float)sum / i);
}