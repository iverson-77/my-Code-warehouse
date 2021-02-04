//给定一个链表，判断链表中是否有环。如果链表中存在环，则返回 true 。 否则，返回 false 。
bool hasCycle(struct ListNode *head) {
    struct ListNode* fast=head;
    struct ListNode* slow=head;
    while(fast&&fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow){
            return true;
        }
    }
    return false;
} 
