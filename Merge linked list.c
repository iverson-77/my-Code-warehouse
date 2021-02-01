//将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。 
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    if(l1==NULL){
        return l2;
    }
    if(l2==NULL){
        return l1;
    }
    struct ListNode* head=NULL,* tail=NULL;
    while(l1!=NULL&&l2!=NULL){
        if(l1->val<l2->val){
            if(head==NULL){
                head=tail=l1;
            }
            else{
                tail->next=l1;
                tail=tail->next;
            }
            l1=l1->next;
        }
        else{
            if(head==NULL){
                head=tail=l2;
            }
            else{
                tail->next=l2;
                tail=tail->next;
            }
            l2=l2->next;
        }
    }
    if(l1)
    tail->next=l1;
    if(l2)
    tail->next=l2;
    return head;


}
