#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


int main(){
  
  int nums[] = {1,1,1,2,2,3};
  int k = 2;
  int freq[100]={0};
  for(int i=0; i<sizeof(nums)/sizeof(nums[0]);i++){
    freq[nums[i]]++;
    
    }
    
  
  
  return 0;
  }