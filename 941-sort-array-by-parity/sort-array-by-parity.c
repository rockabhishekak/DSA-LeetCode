/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {
    int l=0;
    for(int r=0;r<numsSize;r++)
    {
        if(nums[r]%2 == 0)
        {
            int temp= nums[r];
            nums[r]=nums[l];
            nums[l]=temp;
            l++;
        }
    }
    *returnSize=numsSize;
    return nums;

    
}