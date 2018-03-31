#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int	global_variable;
static int	file_static_variable;

void func1(void)
{
	int func1_variable;
	static int local_static_variable;

	printf("&func1_variable..%p\n", (void*)&func1_variable);
	printf("&local_static_variavle..%p\n", (void*)&local_static_variable);
}

void func2(void)
{
	int func2_variable;

	printf("&func2_variable..%p\n", (void*)&func2_variable);
}

void func3(_Bool flag)
{
	int func3_variable;
	static int func3_static_variable;

	if(flag == true){
		func3_variable = 0;
		func3_static_variable = 0;
	}

	printf("func3_variable...%d, &func3_variable...%p\n", func3_variable, &func3_variable);
	printf("func3_static_variable...%d, &func3_static_variable...%p\n", func3_static_variable, &func3_static_variable);

	func3_variable++;
	func3_static_variable++;
	
	if(func3_static_variable <= 20)
			func3(false);
}

int main(void)
{
	int *p;

	/* 関数へのポインタの表示 */
	printf("func1..%p\n", (void*)func1);
	printf("func2..%p\n", (void*)func2);

	/* 文字列リテラルのアドレスの表示 */
	printf("string literal..%p\n", (void*)"abc");

	/* グローバル変数のアドレスの表示 */
	printf("&global_variable..%p\n", (void*)&global_variable);

	/* ファイル内のstatic変数のアドレスの表示 */
	printf("&file_static_variable..%p\n", (void*)&file_static_variable);

	/* ローカル変数の表示(+α) */
	func1();
	func2();
	func1();
	func3(true);

	/* mallocにより確保した領域のアドレス */
	p = malloc(sizeof(int));
	printf("malloc address..%p\n", (void*)p);

	return 0;
}
