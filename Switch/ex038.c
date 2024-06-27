#include<stdio.h>
main()
{
	int num;
	printf("整数を入力");
	scanf("%d", &num);
	switch (num) {
	case(num >=10):
		printf("10点台です\n");
		break;
	case(num>=20):
		printf("20点台です\n");
		break;
	case(num>=30):
		printf("30点台です\n");
		break;
	case(num>=40):
		printf("40点台です\n");
		break;
	case(num>=50):
		printf("エラー！！\n");
		break;
	}
}