#include<stdio.h>
main()
{
	//整数型変数iと要素数５つの配列dataを宣言
	int i, data[5];
	//iを０から４に変化
	for (i = 0; i < 5; i++) {
		//入力を足す
		printf("配列deta[%d]=", i);
		scanf("%d", &data[i]);
	}
	for (i = 0; i < 5; i++) {
		//０から４までを変化しながら表示
		printf("data[%d]=5d\n", i, data[i]);
	}
}