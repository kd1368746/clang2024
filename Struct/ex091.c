#include<stdio.h>
struct profile {
	char name[30];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile data;
	struct profile* p;
	p = &data;
	printf("名前を入力：");
	scanf("%s", p->name);
}