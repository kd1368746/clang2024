#include<stdio.h>
main()
{
	int h, m, s;

	printf("秒数を入力してください");
	scanf("%d", &s);
	if(s>=0){
		if (s <= 5000) {
			h = s / 3600;
			m = (s % 3600) / 60;
			s = s % 60;
			printf("%d時間%d分%d秒\n", h, m, s);
		}
	
	else {
		printf("エラー:入力は５０００までにしてください\n");
	}
	}
	else{
		printf("マイナスはエラーです\n");
	}
	
	}

