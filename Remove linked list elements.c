//ɾ�������е��ڸ���ֵ val �����нڵ㡣
struct ListNode* removeElements(struct ListNode* head, int val){
    while(head!=NULL&&head->val==val){
        head=head->next;
    }   
    struct ListNode* a=head;
    struct ListNode* b=head;
    while(a!=NULL){
        if(a->val==val){
           struct ListNode* tmp=a;
           b->next=a->next;
           a=a->next;
           free(tmp);
        }
        else{
            b=a;
            a=a->next;
        }
    }
    return head;

} 
