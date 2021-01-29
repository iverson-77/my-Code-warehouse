//删除排序数组中的重复项
 int removeDuplicates(int* nums, int numsSize){
    int src=1,dst=0;  
        if(numsSize<2){
            return numsSize;
        }
        for(int i=1;i<numsSize;i++){
            if(nums[src]==nums[dst]){
                src++;
        }
            else{
                ++dst;
                nums[dst]=nums[src];
                ++src;
            }
        }
        return dst+1;

}
