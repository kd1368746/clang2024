#include<stdio.h>
//①宣言
struct syohin_data {
	char name[20];
	int tanka;
};
main()
{
	//②変数の作成
	struct syohin_data syohin;
	struct syohin_data* p;
	p = &syohin;　　　　　　　　//アドレスセット
	printf("商品名＝");
	scanf("%s", p->name);
	p->tanka = 30;
	printf("p->name=%s\n", p->name);
	printf("p->tanka=%d\n", p->tanka);
	printf("syohin.name=%s\n", syohin.name);
	printf("syohin.tanka=%d\n", syohin.tanka);
}