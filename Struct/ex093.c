#include<stdio.h>
struct syohin_data {
	char name[20];
	int tanka;
	int kosuu;
};
main()
{
	struct syohin_data syohin[3] = { {"エンピツ",30,5},{"消しゴム",50,2},{"筆箱",500,3} };
	int i;
	struct syohin_data* p = syohin;
	//p=&syohin[0];
	for (i = 0; i < 3; i++,p++) {
		printf("商品名:%s\t",p->name);
		printf(" 単価：%d\t", p->tanka);
		printf(" 個数：%d\t",p->kosuu);
		printf("金額：￥%d\n",p->tanka * p->kosuu);
	}
}