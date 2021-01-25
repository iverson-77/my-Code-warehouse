#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

typedef int SLdatatype;

typedef struct SeqList
{
	SLdatatype *a;//存储数据空间的指针
	int capacity;//容量空间大小
	int size;//有效数据个数
}SeqList;

void SeqListInit(SeqList *psl)
{
	psl->a = (SLdatatype*)malloc(sizeof(SLdatatype)*4);
	if (psl->a == 0){
		printf("malloc fail\n");
		exit(-1);
	}
	memset(psl->a, 0, sizeof(SLdatatype) * 4);
	psl->size = 0;
	psl->capacity = 4;
}

void SeqListDestroy(SeqList *psl)
{
	free(psl->a);
	psl->a = NULL;
	psl->capacity = psl->size = 0;
}

void SeqListPrint(SeqList *psl)
{
	for(int i=0;i<psl->size;i++){
		printf("%d ", psl->a[i]);
	}
	printf("\n");
}

void CheckCapacity(SeqList* psl)
{
	if (psl->size == psl->capacity){
		SLdatatype *b = (SLdatatype*)realloc(psl->a, sizeof(SLdatatype)*psl->capacity * 2);
		if(b == NULL){
			printf("malloc fail\n");
			exit(-1);
		}
		psl->a = b;
		psl->capacity = psl->capacity * 2;
	}
}

void SeqListPushBack(SeqList *psl, SLdatatype x)
{
	    assert(psl);
		CheckCapacity(psl);
        psl->a[psl->size] = x;
	    psl->size++;

}

void SeqListPushFront(SeqList *psl, SLdatatype x)
{
	assert(psl);
	CheckCapacity(psl);
	for (int i = psl->size; i >0; i--){
		psl->a[i] = psl->a[i - 1];
	}
	psl->a[0] = x;
	psl->size++;
}

void SeqListPopBack(SeqList *psl)
{
	assert(psl);
	assert(psl->size > 0);
	psl->size--;
}

void SeqListPopFront(SeqList *psl)
{
	assert(psl);
	assert(psl->size > 0);
	for(int i = 0; i < psl->size; i++){
		psl->a[i] = psl->a[i + 1];
	}
	psl->size--;
}

int main()
{
	SeqList s1;
	SeqListInit(&s1);
	SeqListPushBack(&s1, 1);
	SeqListPushBack(&s1, 2);
	SeqListPushBack(&s1, 3);
	SeqListPushBack(&s1, 4);
	SeqListPushBack(&s1, 5);
	SeqListPrint(&s1);
	SeqListPushFront(&s1, 0);
	SeqListPrint(&s1);
	SeqListPopBack(&s1);
	SeqListPrint(&s1);
	SeqListPopFront(&s1);
	SeqListPrint(&s1);
}
