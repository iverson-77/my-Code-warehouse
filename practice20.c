//����һ�������ж��������Ƿ��л�����������д��ڻ����򷵻� true �� ���򣬷��� false ��
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
