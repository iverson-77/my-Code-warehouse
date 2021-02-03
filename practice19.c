//编写一个程序，找到两个单链表相交的起始节点。
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *curA=headA;
    struct ListNode *curB=headB;
    if(headA==NULL||headB==NULL){
        return NULL;
    }
    int lenA=1,lenB=1;
    while(curA->next){
        lenA++;
        curA=curA->next;
    }
     while(curB->next){
        lenB++;
        curB=curB->next;
    }
    int x;
    curA=headA;
    curB=headB;
    if(lenA>lenB){
        x=lenA-lenB;
        while(x){
            curA=curA->next;
            x--;
        }
         while(curA&&curB){
        if(curA==curB){
            return curA;
        }
        else{
            curA=curA->next;
            curB=curB->next;
        }
    }
    }
    else{
        x=lenB-lenA;
        while(x){
            curB=curB->next;
            x--;
        }
        while(curA&&curB){
        if(curA==curB){
            return curB;
        }
        else{
            curA=curA->next;
            curB=curB->next;
        }
    }
    }
    return NULL;

}
