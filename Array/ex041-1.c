#include<stdio.h>
main()
{
	int i;
	float  sum=0, box[3];
	printf("実数を入力");
	scanf("%f", &sum);
	sum= 0;
	i = 0;
	for (i = 0; i < 3; i++) {
		sum+=box[i];
		printf("合計は%2fです   平均は%2fです\n", sum,sum/3);
	}
}
