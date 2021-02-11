//在一个排序的链表中，存在重复的结点，请删除该链表中重复的结点，重复的结点不保留，返回链表头指针。
/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/
class Solution {
public:
    ListNode* deleteDuplication(ListNode* pHead)
    {
        if(pHead==NULL||pHead->next==NULL)
        {
            return pHead;
        }
        struct ListNode* cur=pHead;
        struct ListNode* curn=cur->next;
        struct ListNode* prev=NULL;
        while(curn)
        {
            if(cur->val==curn->val){
                while(curn&&cur->val==curn->val){
                    curn=curn->next;
                }
                while(cur!=curn)
                {
                    struct ListNode* del=cur;
                    cur=cur->next;
                    free(del);
                }
                if(prev==NULL){
                    pHead=cur;
                }
                else{
                    prev->next=cur;
                }
                }
                else{
                    prev=cur;
                    cur=curn;
                    curn=curn->next;
                }
            if(cur)
            curn=cur->next;
        }
        return pHead;
    }
};
