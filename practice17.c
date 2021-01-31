//输入一个链表，输出该链表中倒数第k个结点。
struct ListNode* FindKthToTail(int k,struct ListNode* pListHead ) { 
  struct ListNode* a=pListHead;
  struct ListNode* b=pListHead;
  int x=k;
  while(x){
    if(a==NULL){
      return NULL;
    }
    else{
      a=a->next;
    }
    x--;
  }
  while(a->next!=NULL){
    b=b->next;
    a=a->next;
  }
   b=b->next;
  return b;
} 
