#include<stdio.h>
main()
{
	int h, m, s;

	printf("�b������͂��Ă�������");
	scanf("%d", &s);
	if(s>=0){
		if (s <= 5000) {
			h = s / 3600;
			m = (s % 3600) / 60;
			s = s % 60;
			printf("%d����%d��%d�b\n", h, m, s);
		}
	
	else {
		printf("�G���[:���͂͂T�O�O�O�܂łɂ��Ă�������\n");
	}
	}
	else{
		printf("�}�C�i�X�̓G���[�ł�\n");
	}
	
	}

