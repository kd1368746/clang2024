#include<stdio.h>
main()
{
	int cnt, sum, num, a;
	sum = 0;
	cnt = 0;
	printf("®”F");
	while (scanf("%d", & num) != EOF) {
		sum += num;
		cnt++;
		printf("®”F");
	}
	printf("‡Œv%d •½‹Ï=%.2f\n", sum, (float)sum / cnt);

}