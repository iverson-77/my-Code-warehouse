/*ʵ�ֺ��� ToLowerCase()���ú�������һ���ַ������� str��
�������ַ����еĴ�д��ĸת����Сд��ĸ��֮�󷵻��µ��ַ����� */
char * toLowerCase(char * str){
    char* p=str;
    for(p=str;*p!='\0';p++){
        if((int)*p<91&&(int)*p>64){
            *p=(int)*p+32;
        }
    }
    return str;

}
