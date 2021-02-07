//����һ������ÿ���ڵ����һ���������ӵ����ָ�룬��ָ�����ָ�������е��κνڵ��սڵ㡣
//Ҫ�󷵻��������� �����  
struct Node* copyRandomList(struct Node* head) {
	struct Node* cur=head;
    while(cur)
    {
        struct Node* copy=(struct Node*)malloc(sizeof(struct Node));
        struct Node* next=cur->next;
        copy->val=cur->val;
        cur->next=copy;
        copy->next=next;
        cur=next;
    }
    cur=head;
    while(cur)
    {
        struct Node* copy=cur->next;
        if(cur->random==NULL){
            copy->random=NULL;
        }
        else{
            copy->random=cur->random->next;
        }
        cur=copy->next;
    }
    cur=head;
    struct Node* newhead=NULL,* newtail=NULL;
    while(cur)
    {
        struct Node* copy=cur->next;
        struct Node* next=copy->next;
        cur->next=copy->next;
       if(newtail==NULL){
           newhead=newtail=copy;
       }
       else{
           newtail->next=copy;
           newtail=copy;
       }
       cur=next;
    }
    return newhead;
}
