#include<stdio.h>
main()
{
	int num;
	printf("���������");
	scanf("%d", &num);
	switch (num) {
	case(num >=10):
		printf("10�_��ł�\n");
		break;
	case(num>=20):
		printf("20�_��ł�\n");
		break;
	case(num>=30):
		printf("30�_��ł�\n");
		break;
	case(num>=40):
		printf("40�_��ł�\n");
		break;
	case(num>=50):
		printf("�G���[�I�I\n");
		break;
	}
}