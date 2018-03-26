#include <stdio.h>

int main(void)
{
	int array[5];
	int *p;
	int i;

	/* 配列arrayに値を設定*/
	for (i = 0; i < 5; i++) {
		array[i] = i;
	}

	/*ポインタを使って配列の内容を表示する。書き換え版 */
	p = &array[0];
	for (i = 0; i < 5; i++) {
		printf("%d\n", *(p + i));
	}

	return 0;
}  
