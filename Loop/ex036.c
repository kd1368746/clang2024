#include<stdio.h>
main()
{
	int i;
	printf("dreak test progrem\n");
	for (i = 1; i < 10; i++) {
		if (i == 7) {
			break;                      //���[�v��E�o
		}
		printf("%3d", i);
	}
	printf("\n\ncotinue test program\n");
	for (i = 1; i <= 10; i++) {
		if (i % 2 == 1) {
			continue;�@�@�@�@�@�@�@�@�@�@//�c��̏������X�L�b�v
		}
		printf("%3d", i);
	}
}
	