#include<stdio.h>
//�@�錾
struct syohin_data {
	char name[20];
	int tanka;
};
main()
{
	//�A�ϐ��̍쐬
	struct syohin_data syohin;
	struct syohin_data* p;
	p = &syohin;�@�@�@�@�@�@�@�@//�A�h���X�Z�b�g
	printf("���i����");
	scanf("%s", p->name);
	p->tanka = 30;
	printf("p->name=%s\n", p->name);
	printf("p->tanka=%d\n", p->tanka);
	printf("syohin.name=%s\n", syohin.name);
	printf("syohin.tanka=%d\n", syohin.tanka);
}