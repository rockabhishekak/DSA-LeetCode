/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParityII(int* nums, int numsSize, int* returnSize) {
    int i=0;
    int j=1;
    while(i<numsSize && j<numsSize)
    {
        if(nums[i]%2==0)
        {
            i=i+2;
        }
        else if(nums[j]%2==1)
        {
            j=j+2;
        }
        else
        {
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i=i+2;
            j=j+2;
        }
    }
    
    *returnSize = numsSize;
    return nums;
    
}