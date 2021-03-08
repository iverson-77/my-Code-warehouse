//ջ 
#include"Stack.h"

void init(Stack* pst)
{
	assert(pst);
	pst->a = (STDataType*)malloc(sizeof(STDataType)* 4);
	pst->top = 0;
	pst->capacity = 4;
}

void push(Stack* pst, STDataType x)
{
	assert(pst);
	if (pst->capacity == pst->top){
		STDataType* tmp = realloc(pst->a, pst->capacity * 2 * sizeof(STDataType));
		if (tmp == NULL){
			printf("relloc fail\n");
			exit(-1);
		}
		pst->a = tmp;
		pst->capacity *= 2;
	}
	pst->a[pst->top] = x;
	pst->top++;
}

void pop(Stack* pst)
{
	assert(pst);
	assert(!empty(pst));
	pst->top--;
}

void destory(Stack* pst)
{
	assert(pst);
	free(pst);
	pst->a = NULL;
	pst->top = pst->capacity = 0;
}

int Size(Stack* pst)
{
	assert(pst);
	return pst->top;
}

STDataType Top(Stack* pst)
{
	assert(pst);
	assert(!empty(pst));
	return pst->a[pst->top - 1];
}

int empty(Stack* pst)
{
	assert(pst);
	return pst->top == 0 ? 1 : 0;
}
