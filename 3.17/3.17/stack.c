#include "stackl.h"

void test()
{
	ST p;
	STInit(&p);
	STpush(&p, 1);
	STpush(&p, 2);
	STpush(&p, 3);
	STpush(&p, 4);
	STpush(&p, 5);

	printf("%d\n", STSize(&p));//获得栈中有效元素的个数
	while (!STEmpty(&p))
	{
		printf("%d ", STTop(&p));//将栈的数据展现出现，要求先进后出，后进先出
		STpop(&p);
	}
	
	STDestroy(&p);
}
int main()
{
	test();
	return 0;
}