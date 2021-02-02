//����һ�����ͷָ�� ListNode* pHead����һ��ֵx����дһ�δ��뽫����С��x�Ľ������������֮ǰ��
//�Ҳ��ܸı�ԭ��������˳�򣬷����������к�������ͷָ�롣
struct ListNode* partition(struct ListNode* pHead, int x) {
        struct ListNode* greaterhead,* greatertail,* lesshead,* lesstail;
         greaterhead=greatertail=(struct ListNode*)malloc(sizeof(struct ListNode));
         lesshead=lesstail=(struct ListNode*)malloc(sizeof(struct ListNode));
         struct ListNode* cur=pHead;
        while(cur){
            if(cur->val<x){
                lesstail->next=cur;
                lesstail=cur;
                
            }
            else{
                greatertail->next=cur;
                greatertail=cur;
            }
            cur=cur->next;
        }
        lesstail->next=greaterhead->next;
        greatertail->next=NULL;
        
        struct ListNode* list=lesshead->next;
        free(greaterhead);
        free(lesshead);
        return list;
    }
