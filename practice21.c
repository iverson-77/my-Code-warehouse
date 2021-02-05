//给定一个链表，返回链表开始入环的第一个节点。 如果链表无环，则返回 null。
struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode* fast=head;
    struct ListNode* slow=head;
    while(fast&&fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow){
            struct ListNode* meet=slow;
            struct ListNode* cur=head;
            while(meet!=cur){
                meet=meet->next;
                cur=cur->next;
            }
            return cur;
        }        
        
    }
    return NULL;
} 
