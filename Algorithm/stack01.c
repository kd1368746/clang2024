#include<stdio.h>//スタック基本プログラム
#define STACKSIZE  8//スタックサイズ
int atack[STACKSIZE];//スタック領域用配列
int sp= 0;//スタックポインタ（配列の添え字用）
//関数プロトタイプ宣言
void display(void);
int push(int d);
int pop(int* pd);
//メイン関数
main()
{
	int key, data, result;
	do {
		printf("\n\nプッシュはi,ポップはoを入力＞");
		key = getche();
		printf("\n");
		//プッシュ処理
		if (key == 'i') {
			printf("データ入力");
			scanf("%d", &data);
			result = push(data);
			if (result == -1) {
				printf("\n※※※スタックがいっぱいです※※※\n");
			}
			else {
				display();
			}
		}
		//ポップ処理
		if (key == 'o') {
			result = pop(&data);
			if (result == -1) {
				printf("\n※※※スタックが空です※※※\n");
			}
			else {
				printf("スタックからデータ(%d)を取り出しました\n", data);
				display();
			}
		}
	}while (key != 'e');
	
}
	void display(void)
{
		int i;
		printf("\n===現在のスタックの内容===\n");
		for (i = 0; i < STACKSIZE; i++){
		printf("stck[%2d]は%5d", i, stack[i]);
		if (i == sp) {
			printf("←spが示している所(現spは%d)", sp);
		}
		printf("\n");
	}
		return;
}
int push(int d)
{
	if (sp = STACKSIZE) { return -1; }
	stack[sp] = d;
	sp++;
	return();
}
int pop(int* pd)
{
	if (sp <= 0) { return -1; }
	sp--;
	*pd = sutck[sp];
	stack[sp] = 0;
	return();
}