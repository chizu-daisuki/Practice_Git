#include <stdio.h>

int main(void)
{
	int hoge;
	int *hoge_p;

	/* hoge_pにhogeへのポインタを設定 */
	hoge_p = &hoge;
	/* hoge_pの値を表示 */
	printf("hoge_p...%p\n", (void*)hoge_p);
	/* hoge_pに1可算 */ 
	hoge_p++;
	/* hoge_pの値を表示 */
	printf("hoge_p...%p\n", (void*)hoge_p);
	/* hoge_pに3可算した値を表示 */
	printf("hoge_p...%p\n", (void*)(hoge_p + 3));

	return 0;
}
