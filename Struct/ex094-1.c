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
	p = data;//�udata[i].�v->�u�ip+1�j->�v
	for (i = 0; i < 5; i++, p++) {
		printf("%d�l�ڂ̖��O�����:", i + 1);
		scanf("%s", (p + 1)->name);
		printf("%d�l�ڂ̐��N�������󔒂ŋ�؂��ē���:", i + 1);
		scanf("%d%d%d", &(p + 1)->birth[0], &(p + 1)->birth[1], &(p + 1)->birth[2]);
		printf("%d�l�ڂ̌��t�^�����:", i + 1);
		scanf("%s", (p + 1)->blood);


		for (p = data, i = 0; i < NIN; i++, p++) {
			if (p->date.tuki == 2) {
				printf("%s-- %d �N %02d �� %02d ���� ���t�^-%s�^\n",
					p->name, p->date.nen, p->date.tuki, p->date.hi, p->blood);
			}
		}
	}
}