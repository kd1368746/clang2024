#include<stdio.h>
main()
{
	//�����^�ϐ�i�Ɨv�f���T�̔z��data��錾
	int i, data[5];
	//i���O����S�ɕω�
	for (i = 0; i < 5; i++) {
		//���͂𑫂�
		printf("�z��deta[%d]=", i);
		scanf("%d", &data[i]);
	}
	for (i = 0; i < 5; i++) {
		//�O����S�܂ł�ω����Ȃ���\��
		printf("data[%d]=5d\n", i, data[i]);
	}
}