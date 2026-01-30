/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* applyOperations(int* nums, int numsSize, int* returnSize) {
    for(int i=0;i<numsSize-1;i++)
    {
        if(nums[i]==nums[i+1])
        {
            nums[i]=nums[i]*2;
            nums[i+1]=0;
        }
    }
    int l=0;
    for(int r=0;r<numsSize;r++)
    {
        if(nums[r]!=0)
        {
            int temp=nums[r];
            nums[r]=nums[l];
            nums[l]=temp;
            l++;
            
        }
    }
    *returnSize = numsSize;
    return nums;

}