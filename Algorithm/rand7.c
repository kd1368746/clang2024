#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int p, c;
	srand(time(0));
	rand();
	c = rand() % 3;
	printf("�����o���܂���\n");
	printf("(1:�p�[2:�`���L3:�O�[)��");
	scanf("%d\n", &p);
	switch (p) {
	case 1:
		printf("\n�v���C���[�̓p�[�ł�\n");
			break;
	case 2:
		printf("\n�v���C���[�̓`���L�ł�\n");
		break;
	case 3:
		printf("\n�v���C���[�̓O�[�ł�\n");
			break;
	}
	switch (c) {
	case 0:
			printf("�R���s���[�^�[�́A�p�[�ł�\n");
			break;
	case 1:
		printf("�R���s���[�^�[�́A�`���L�ł�\n");
		break;
	case 2:
		printf("�R���s���[�^�[�́A�O�[�ł�\n");
		break;
	}
	switch (((p - 1) - c + 3) % 3) {
	case 0:
		printf("\n�������ł�\n");
		break;
	case 1:
		printf("\n�R���s���[�^�[�̏����ł�\n"); 
		break;
	case 2:
		printf("\n�R���s���[�^�[�̏����ł�\n");
	}
}