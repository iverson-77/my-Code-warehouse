//��תһ��������

struct ListNode* reverseList(struct ListNode* head){
   if(head==NULL||head->next==NULL){
       return head;
   }
   struct ListNode* n1=NULL;
   struct ListNode* n2=head;
   struct ListNode* n3=n2->next;
    while(n2!=NULL){
        n2->next=n1;
        n1=n2;
        n2=n3;
        if(n3!=NULL)
        n3=n3->next;
    }
    return n1;

}
