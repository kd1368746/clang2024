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
	p = data;//�udata[i].�v->�u�ip+1�j->�v
	for (i = 0; i < 5; i++,p++){
	printf("%d�l�ڂ̖��O�����:", i + 1);
	scanf("%s", (p + 1)->name);
	printf("%d�l�ڂ̐��N�������󔒂ŋ�؂��ē���:", i + 1);
	scanf("%d%d%d", &(p + 1)->birth[0], &(p + 1)->birth[1], &(p + 1)->birth[2]);
	printf("%d�l�ڂ̌��t�^�����:",i+1);
	scanf("%s", (p+1)->blood);
}
	for (i = 0; i < 5; i++) {
		if (strcmp((p+1)->blood, "A") == 0) {
			printf("%s-- %d �N %d �� %d ���� ���t�^-%s�^\n",(p+1)->name, (p+1)->birth[0], (p+1)->birth[1], (p+1)->birth[2], (p+1)->blood);
		}
	}
}