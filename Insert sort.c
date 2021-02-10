//对链表进行插入排序 
struct ListNode* insertionSortList(struct ListNode* head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    struct ListNode* sorthead=head;
    struct ListNode* node=head->next;
    sorthead->next=NULL;
    while(node)
    {
        struct ListNode* nodenext=node->next;
        struct ListNode* prev=NULL;
        struct ListNode* cur=sorthead;
        while(cur)
        {
            if(node->val<cur->val){
                if(prev==NULL){
                    node->next=cur;
                    sorthead=node;
                }
                else{
                    prev->next=node;
                    node->next=cur;
                }
                break;
            }
            else{
                prev=cur;
                cur=cur->next;
            }
        }
        if(cur==NULL){
            prev->next=node;
            node->next=cur;
        }
        node=nodenext;
    }
    return sorthead;
}
