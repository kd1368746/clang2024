#include <stdio.h>
#include<string.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile data[5];
	struct profile* p;
	int i;
	p = data;//「data[i].」->「（p+1）->」
	for (i = 0; i < 5; i++,p++){
	printf("%d人目の名前を入力:", i + 1);
	scanf("%s", (p + 1)->name);
	printf("%d人目の生年月日を空白で区切って入力:", i + 1);
	scanf("%d%d%d", &(p + 1)->birth[0], &(p + 1)->birth[1], &(p + 1)->birth[2]);
	printf("%d人目の血液型を入力:",i+1);
	scanf("%s", (p+1)->blood);
}
	for (i = 0; i < 5; i++) {
		if (strcmp((p+1)->blood, "A") == 0) {
			printf("%s-- %d 年 %d 月 %d 日生 血液型-%s型\n",(p+1)->name, (p+1)->birth[0], (p+1)->birth[1], (p+1)->birth[2], (p+1)->blood);
		}
	}
}