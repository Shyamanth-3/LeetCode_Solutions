int singleNumber(int* nums, int numsSize) {
    int i,k,j,temp=0;
    for(i=0;i<numsSize;i++){
        k=nums[i];
        temp=0;
        for(j=0;j<numsSize;j++){
            if(k==nums[j])
                temp+=1;  
        }
        if(temp==1)
            return k;
    }
    return 0;
}