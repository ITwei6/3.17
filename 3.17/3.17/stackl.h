#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define N 10
typedef int STData;
//struct stack1
//{
//	int arr[N];//静态数组
//	int top;//栈顶
//}ST;
typedef struct Stack
{
	int* a;
	int top;
	int capicty;
}ST;
void STInit(ST*ps);//初始化栈表
void STDestroy(ST* ps);//销毁栈表
void STpush(ST* ps,STData x);//压栈，在栈顶压入一个元素
void STpop(ST* ps);//出栈，在栈顶弹出一个元素。
STData STTop(ST* ps);//访问栈顶元素
int STSize(ST* ps);
int STEmpty(ST*ps);//
//