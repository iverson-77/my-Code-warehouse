  //ԭ���Ƴ����������е�Ԫ��val��Ҫ��ʱ�临�Ӷ�ΪO(N)���ռ临�Ӷ�ΪO(1) 
int removeElement(int* nums, int numsSize, int val){
        int a=0,b=0;
        int k=numsSize;
        for(int i=0;i<k;i++){
            if(nums[a]!=val){                     
                nums[b++]=nums[a++];
            }
            else{
                a++;  
               numsSize--;
            }
        }
       return numsSize;

}
