#include<stdio.h>
struct syohin_data {
	char name[20];
	int tanka;
	int kosuu;
};
main()
{
	struct syohin_data syohin[3] = { {"�G���s�c",30,5},{"�����S��",50,2},{"�M��",500,3} };
	int i;
	struct syohin_data* p = syohin;
	//p=&syohin[0];
	for (i = 0; i < 3; i++,p++) {
		printf("���i��:%s\t",p->name);
		printf(" �P���F%d\t", p->tanka);
		printf(" ���F%d\t",p->kosuu);
		printf("���z�F��%d\n",p->tanka * p->kosuu);
	}
}