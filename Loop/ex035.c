#include<stdio.h>
main()
{
	int  num,sum;                //
	
	sum = 0;
		while (1){
			printf("���́H");
			scanf("%d", &num);
			if (num==-999) {
				break;          //���[�v���P�ʂ���
			}
			sum += num;         //�������ݏ���(sum=num+sum:)
	}
		printf("���v��%d\n", sum);
}