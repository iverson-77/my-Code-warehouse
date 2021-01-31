//给定一个头结点为 head 的非空单链表，返回链表的中间结点。
//如果有两个中间结点，则返回第二个中间结点。
struct ListNode* middleNode(struct ListNode* head){
    struct ListNode* a=head;
    struct ListNode* b=head;
    while(a!=NULL&&a->next!=NULL){
        b=b->next;
        a=a->next->next;
    }
    
    return b;
}
  
