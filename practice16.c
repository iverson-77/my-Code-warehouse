//����һ�����飬�������е�Ԫ�������ƶ� k ��λ�ã����� k �ǷǸ�����
void reverse(int* nums,int a,int b){
    int j;
    while(a<=b){
        j=nums[a];
        nums[a]=nums[b];
        nums[b]=j;
        a++;
        b--;
    }
}

void rotate(int* nums, int numsSize, int k){
    k=k%numsSize;
    reverse(nums,0,numsSize-k-1);
    reverse(nums,numsSize-k,numsSize-1);
    reverse(nums,0,numsSize-1);
}
