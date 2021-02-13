void reverse(int* nums, int a,int b)
{
    int x=0;
    while(a<=b){
        x=nums[a];
        nums[a]=nums[b];
        nums[b]=x;
        a++;
        b--;
    }
}
void rotate(int* nums, int numsSize, int k){   
    k%=numsSize;
    reverse(nums,0,numsSize-k-1);
    reverse(nums,numsSize-k,numsSize-1);
    reverse(nums,0,numsSize-1);
}
