#include <stdio.h>
#include <stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
     int i, j;
     int *retun = malloc(2*(sizeof(int)));
     for(i=0;i<numsSize;i++){
        for(j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==target){
                retun[0]=i;
                retun[1]=j;
                *returnSize = 2;
                return retun;
            }
        }
     }
     *returnSize=0;
     return NULL;
    
    }