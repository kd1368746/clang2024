#include<stdio.h>
main()
{
	int  num,sum;                //
	
	sum = 0;
		while (1){
			printf("数は？");
			scanf("%d", &num);
			if (num==-999) {
				break;          //ループを１つぬける
			}
			sum += num;         //足し込み処理(sum=num+sum:)
	}
		printf("合計＝%d\n", sum);
}