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

	printf("%d\n", STSize(&p));//���ջ����ЧԪ�صĸ���
	while (!STEmpty(&p))
	{
		printf("%d ", STTop(&p));//��ջ������չ�ֳ��֣�Ҫ���Ƚ����������ȳ�
		STpop(&p);
	}
	
	STDestroy(&p);
}
int main()
{
	test();
	return 0;
}