//����һ��ͷ���Ϊ head �ķǿյ���������������м��㡣
//����������м��㣬�򷵻صڶ����м��㡣
struct ListNode* middleNode(struct ListNode* head){
    struct ListNode* a=head;
    struct ListNode* b=head;
    while(a!=NULL&&a->next!=NULL){
        b=b->next;
        a=a->next->next;
    }
    
    return b;
}
  
