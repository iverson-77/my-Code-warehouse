/*对于一个链表，请设计一个时间复杂度为O(n),额外空间复杂度为O(1)的算法，判断其是否为回文结构。

给定一个链表的头指针A，请返回一个bool值，代表其是否为回文结构。保证链表长度小于等于900。*/
class PalindromeList {
public:
    bool chkPalindrome(ListNode* A) {
        struct ListNode* a=A;
        struct ListNode* b=A;
        while(a!=NULL&&a->next!=NULL){
            b=b->next;
            a=a->next->next;
        }
        struct ListNode* part1=A;
        struct ListNode* c=NULL;
        struct ListNode* d=b->next;
        if(b==NULL||b->next==NULL){
       return b;
   }
        while(b){
            b->next=c;
            c=b;
            b=d;
            if(d!=NULL){
                d=d->next;
            }
            
        }
        struct ListNode* part2=c;
        while(part1  &&  part2){
            if(part1->val!=part2->val){
                return false;
            }
            else{
                part1=part1->next;
                part2=part2->next;
            }
        }
        return true;
    }
}; 
