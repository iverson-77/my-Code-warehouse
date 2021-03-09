/*给定一个只包括 '('，')'，'{'，'}'，'['，']'?的字符串 s ，判断字符串是否有效。
有效字符串需满足：
1、左括号必须用相同类型的右括号闭合。
2、左括号必须以正确的顺序闭合。*/

typedef char STDataType;
typedef struct Stack
{
	STDataType* a;
	int top;
	int capacity;
}Stack;

void init(Stack* pst);
void push(Stack* pst, STDataType x);
void pop(Stack* pst);
void destory(Stack* pst);
int Size(Stack* pst);
STDataType Top(Stack* pst);
//为空返回1，非空返回0
int empty(Stack* pst);

void init(Stack* pst)
{
	assert(pst);
	pst->a = (STDataType*)malloc(sizeof(STDataType)* 4);
	pst->top = 0;
	pst->capacity = 4;
}

void push(Stack* pst, STDataType x)
{
	assert(pst);
	if (pst->capacity == pst->top){
		STDataType* tmp = realloc(pst->a, pst->capacity * 2 * sizeof(STDataType));
		if (tmp == NULL){
			printf("relloc fail\n");
			exit(-1);
		}
		pst->a = tmp;
		pst->capacity *= 2;
	}
	pst->a[pst->top] = x;
	pst->top++;
}

void pop(Stack* pst)
{
	assert(pst);
	assert(!empty(pst));
	pst->top--;
}

void destory(Stack* pst)
{
	assert(pst);
	free(pst);
	pst->a = NULL;
	pst->top = pst->capacity = 0;
}

int Size(Stack* pst)
{
	assert(pst);
	return pst->top;
}

STDataType Top(Stack* pst)
{
	assert(pst);
	assert(!empty(pst));
	return pst->a[pst->top - 1];
}

int empty(Stack* pst)
{
	assert(pst);
	return pst->top == 0 ? 1 : 0;
}

bool isValid(char * s){
    Stack st;
    init(&st);
    while(*s)
    {
        if(*s=='('||*s=='['||*s=='{')
        {
            push(&st,*s);
            ++s;
        }

        else{
            if(empty(&st))
            {
                destory(&st);
                return false;
            }
            char top=Top(&st);
            pop(&st);
                if((*s=='('&&top!=')')||
                   (*s=='['&&top!=']')||
                   (*s=='{'&&top!='}'))
                   {
                       destory(&st);
                       return false;
                   }
                else
                {
                    s++;
                }
        }
    }
    if(empty(&st))
    {
        destory(&st);
        return true;
    }
    else
    {
        destory(&st);
        return false;
    }
}
