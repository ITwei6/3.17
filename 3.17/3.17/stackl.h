#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define N 10
typedef int STData;
//struct stack1
//{
//	int arr[N];//��̬����
//	int top;//ջ��
//}ST;
typedef struct Stack
{
	int* a;
	int top;
	int capicty;
}ST;
void STInit(ST*ps);//��ʼ��ջ��
void STDestroy(ST* ps);//����ջ��
void STpush(ST* ps,STData x);//ѹջ����ջ��ѹ��һ��Ԫ��
void STpop(ST* ps);//��ջ����ջ������һ��Ԫ�ء�
STData STTop(ST* ps);//����ջ��Ԫ��
int STSize(ST* ps);
int STEmpty(ST*ps);//
//