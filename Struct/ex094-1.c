#include <stdio.h>
#define NIN 5
struct day {
	int nen;
	int tuki;
	int hi;
};
struct profile {
	char name[20];
	struct day date;
	char blood[5];
};
main()
{
	struct profile data[5];
	struct profile* p;
	int i;
	p = data;//「data[i].」->「（p+1）->」
	for (i = 0; i < 5; i++, p++) {
		printf("%d人目の名前を入力:", i + 1);
		scanf("%s", (p + 1)->name);
		printf("%d人目の生年月日を空白で区切って入力:", i + 1);
		scanf("%d%d%d", &(p + 1)->birth[0], &(p + 1)->birth[1], &(p + 1)->birth[2]);
		printf("%d人目の血液型を入力:", i + 1);
		scanf("%s", (p + 1)->blood);


		for (p = data, i = 0; i < NIN; i++, p++) {
			if (p->date.tuki == 2) {
				printf("%s-- %d 年 %02d 月 %02d 日生 血液型-%s型\n",
					p->name, p->date.nen, p->date.tuki, p->date.hi, p->blood);
			}
		}
	}
}