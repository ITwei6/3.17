#include "stackl.h"
void STInit(ST* ps)//��ʼ��ջ��
{
	assert(ps);//�жϽṹ��ָ�벻ΪNULL��
	//һ�������Ը�ջ���ʼ������
	ps->a = (STData*)malloc(sizeof(STData) * 4);
	if (ps->a == NULL)//�ж��Ƿ񿪱ٳɹ�
	{
		perror("malloc");
	}
	//��ʼ������Ϊ4
	ps->capicty = 4;
	ps->top = 0;//top=0 ��ʾ����ָ��ջ��Ԫ�ص���һ��λ��
	//top���Ϊ-1�����ʾջ��Ԫ�ص�λ��
}
void STDestroy(ST* ps)//����ջ��
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->capicty = 0;
	ps->top = 0;

}
void STpush(ST* ps, STData x)//ѹջ����ջ��ѹ��һ��Ԫ��--��ѹ��֮ǰҲҪ�����Ƿ���Ҫ����
{
    assert(ps);//�����ж�
	if (ps->top == ps->capicty)
	{
		//����
		STData* tmp = (STData*)realloc(ps->a, sizeof(STData) * ps->capicty * 2);
		if (tmp == NULL)
		{
			perror("realloc");
		}
		ps->a = tmp;
		ps->capicty *= 2;
	}
	ps->a[ps->top] = x;//��Ԫ��ѹ��ջ����һ��ʼtop��0����Ԫ�ؽ�ȥ������topָ���ջ��Ԫ�غ�һ��λ��
	ps->top++;
}
int STEmpty(ST* ps)
{
	assert(ps);
	return ps->top == 0;
}

void STpop(ST* ps)//��ջ����ջ������һ��Ԫ�ء�
{
	assert(ps);
	//ɾ��Ԫ��֮ǰҪ���ջ���Ƿ���Ԫ�ؿ�ɾ
	assert(!STEmpty(ps));//��ջ��ΪNULL�Ƕ���
	ps->top--;

}
int STSize(ST* ps)//����ջ����
{
	assert(ps);
	return ps->top;
	//top�ĳ��Ⱦ���ջ��ĳ���
}
STData STTop(ST* ps)//����ջ��Ԫ��
{
	assert(ps);
	return ps->a[ps->top - 1];
}