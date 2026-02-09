#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int MaxArea(int *height, int heightSize){
  
  int left = 0;
  int right = 8;
  int MaxArea = 0;
  int Area = 0;
  
  
  while(left < right){
    
    if(height[left]<height[right]){
      
      Area = (right-left) * height[left];
      
      if(Area > MaxArea){
        
        MaxArea = Area;
        left  = left + 1;
        }
      
      else{
      left = left + 1;
      }
      }
      
    else{
      
      Area = (right- left) * height[right];
      
      if (Area > MaxArea){
        
        MaxArea = Area;
        right = right - 1; 
      }
      else{
        right = right - 1; 
        }
      
      
      }    
    

    }
  
      return MaxArea;
    

  
  
  }


int main() {

int height[] = {1,8,6,2,5,4,8,3,7};

MaxArea(height,9);

          printf("%d",MaxArea(height,9));

  return 0;
}