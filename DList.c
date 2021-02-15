//带头结点的双向循环链表 
#include"DList.h"

ListNode* Init()
{
	ListNode* phead = (ListNode*)malloc(sizeof(ListNode));
	phead->next = phead;
	phead->prev = phead;
	return phead;
}

ListNode *buy(LTdataType x)
{
	ListNode *node = (ListNode*)malloc(sizeof(ListNode));
	node->data = x;
	node->next = NULL;
	node->prev = NULL;
	return node;
}

void pushback(ListNode *phead, int x)
{
	assert(phead);
	ListNode *newnode = buy(x);
	ListNode *tail = phead->prev;
	tail->next = newnode;
	newnode->prev = tail;
	newnode->next = phead;
	phead->prev = newnode;
	//insert(phead,x);
}

void pushfront(ListNode *phead, int x)
{
	assert(phead);
	assert(phead->next != phead);
	ListNode *newnode = buy(x);
	ListNode *head = phead->next;
	head->prev = newnode;
	newnode->next = phead->next;
	newnode->prev = phead;
	phead->next = newnode;
	//insert(phead->next,x);
}

void popback(ListNode *phead)
{
	assert(phead);
	assert(phead->next != phead);
	ListNode *tail = phead->prev;
	phead->prev = tail->prev;
	tail->prev->next = phead;
	free(tail);
	//erase(phead->prev);
}

void popfront(ListNode *phead)
{
	assert(phead);
	ListNode *head = phead->next;
	phead->next = head->next;
	head->next->prev = phead;
	free(head);
	//erase(phead->next);
}

ListNode *find(ListNode *phead, LTdataType x)
{
	assert(phead);
	ListNode *cur=phead->next;
	while (cur != phead){
		if (cur->data == x){
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}

void insert(ListNode *pos, LTdataType x)
{
	assert(pos);
	ListNode *newnode = buy(x);
	ListNode *posPrev = pos->prev;
	posPrev->next = newnode;
	newnode->prev = posPrev;
	newnode->next = pos;
	pos->prev = newnode;
}

void erase(ListNode *pos)
{
	assert(pos);
	
	ListNode *posPrev = pos->prev;
	ListNode *posNext = pos->next;
	posPrev->next = posNext;
	posNext->prev = posPrev;
	free(pos);
}

void print(ListNode *phead)
{
	assert(phead);
	ListNode* cur = phead->next;

	while (cur!=phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}
