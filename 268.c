int missingNumber(int* nums, int numsSize) {
    int sum1=0,sum2=0,i;
    for(i=0;i<numsSize;i++){
        sum1+=nums[i];
    }
    sum2 = numsSize*(numsSize+1)/2;
    return sum2 - sum1;
}
