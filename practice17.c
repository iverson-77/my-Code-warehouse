//����һ����������������е�����k����㡣
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
