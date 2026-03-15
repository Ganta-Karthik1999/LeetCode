#include<stdio.h>


/**
 * @brief This is a bad algorithsm
 *  
 * **/

 /*
int searchInsert(int* nums, int numsSize, int target) {

    if(target == nums[numsSize/2]){
        return numsSize/2;
    }
    else if(target > nums[numsSize/2]){
        for(int i = numsSize/2 ; i< numsSize ; i++){
            if(nums[i]== target)
                return i;
            else if(target< nums[i])
                return i;
        }
    }

    else if(target < nums[numsSize/2]){
        for(int i = 0 ; i<= numsSize/2 ; i++){
            if(nums[i]== target)
                return i;
            else if(target < nums[i])
                return i;
        }
    }
}

*/



int searchInsert(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;
    while (left<=right)
    {
        int mid = left +(right-left)/2;

        if(nums[mid] == target){
            return mid;
        }
        else if(nums[mid] < target){
            left = mid +1;
        }
        else{
            right = mid- 1;
        }

    }

    return left;
    
    

}


int main(){
    int nums[] = {1,3,5,6};
    int numsSize = (int)sizeof(nums)/sizeof(nums[0]);
    printf("%d",searchInsert(nums,numsSize,2));
    // searchInsert(nums,numsSize,5);
    return 0;
}