#include<stdio.h>
main()
{
	int a1, a2, a;
	printf("���Z�q�����");
	scanf("%d", &a);
	printf("�Q�̐��������");
	scanf("%d%d", &a1, &a2);
	if (a == 1) {
		printf("%d\n", a1 + a2);
	}
	else{
		if (a == 2) {
			printf("%d\n", a1 - a2);
		}
		else{
			if (a == 3) {
				printf("%d\n", a1 * a2);
			}
			else{
				if (a == 4) {
					printf("%d\n", a1 / a2);
				}
			}
		}
	}
}

