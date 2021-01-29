  //原地移除数组中所有的元素val，要求时间复杂度为O(N)，空间复杂度为O(1) 
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
