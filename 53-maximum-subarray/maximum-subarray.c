int maxSubArray(int* nums, int numsSize) {
    int m = INT_MIN;
    int c = 0;
    //kaden`s algorithim
    for(int i= 0 ;i<numsSize;i++)
    {
        c = c + nums[i];
        m = c>m?c:m;
        if(c<0)
        {
            c = 0;
        }

    }
    return m;
}