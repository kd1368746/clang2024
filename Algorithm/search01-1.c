#include<stdio.h>
#include<sydlib.h>
#include<time.h>
main()
{
	int i, s;
	int d[10];
	printf("�T���l����́F");
	scanf("%d", &s);
	for (i = 0; i < 10; i++) {
		if (s == d[i]) {
			break;
		}
	}
	if (i == 10) {
		printf("���̓f�[�^%d�͌�����܂���ł���\n", s);
	}
	else {
		printf("%d�ԖڂɌ�������\n", i);
	}
}