#include<stdio.h>
main()
{
	int data[10] = { 10,20,30,40,50,60,70,-999 };
	int* p_data;
	int i;
	p_data = data;
	printf("�|�C���g���Œ�ŕ\��");
	for (data = 0; data != -999; data++) {
		printf("�z��%d\n", data);
	}
	printf("�|�C���^��ω������ĕ\��");
	for (data = 0; data != -999; data++) {
		printf("�z��%d\n", data);
	}
}