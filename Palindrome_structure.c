/*����һ�����������һ��ʱ�临�Ӷ�ΪO(n),����ռ临�Ӷ�ΪO(1)���㷨���ж����Ƿ�Ϊ���Ľṹ��

����һ�������ͷָ��A���뷵��һ��boolֵ���������Ƿ�Ϊ���Ľṹ����֤������С�ڵ���900��*/
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
