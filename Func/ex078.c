#include<stdio.h>

int tbl_gokei1(int* p);
int tbl_gokei2(int tbl[]);
int tnl_gokei1b(int* p);

main()
{
	int a[] = { 10,20,30,40,-999 },gokei;
	gokei = tbl_gokei1(a);
	printf("gokei=%d\n", gokei);
	gokei = tbl_gokei2(a);
	printf("gokei=%d\n", gokei);
	gokei = tbl_gokei1b(a);
	printf("gokei=%d\n", gokei);

}
//�|�C���^�Ŏ󂯎��
int tbl_gokei1(int* p)
{
	int gokei = 0;
	while (*p != -999) {
		gokei += *p;
		p++;
	}
	return(gokei);
}
//�z��Ŏ󂯎��
int tbl_gokei2(int tbl[])
{
	int gokei = 0, i = 0;
	while (tbl[i] != -999) {
		gokei += tbl[i];
		i++;
	}
	return(gokei);
}
//�|�C���^���󂯎�����A�h���X��
//�Œ肵�Ďg���Ă݂�
int tbl_gokei1b(int* p)
{
	int gokei = 0, i=0;
	while (*(p+i) != -999) {
		gokei +=*(p+i);
			i++;
	}
	return(gokei);
}