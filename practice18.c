//现有一链表的头指针 ListNode* pHead，给一定值x，编写一段代码将所有小于x的结点排在其余结点之前，
//且不能改变原来的数据顺序，返回重新排列后的链表的头指针。
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
