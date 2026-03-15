// #include<stdio.h>
// #include<stdlib.h>
// #include<stdbool.h>


// bool find(char* temp, char a) {
//   int temp1 =0; 
//   for(int j =0 ; j < sizeof(temp);j++){
//     if(temp[j]==a){
//       temp1 = temp1 +1;
//       }
//     }
    
//     if(temp1 > 0)return true;
//     else return false;
  
  
//   }


// int repeat(char * s){
//   char temp[sizeof(s)];
//   int right = 0;
//   int left = 0;
//   int i = 0;
//   int maxvalue = 0;
  
//   for(int j =0 ; j<sizeof(temp);j++){
    
//     temp [j] = '0';
    
//     }
  
  
//   while(s[i]!="\0"){
    
//     if(find(temp,s[right])== true){
//       maxvalue = right - left ;
//       while(find(temp,s[right]) == true){
//         temp[left]='0';
//         left++;
        
//         }
      
      
//       }
    
//     temp[i]=s[right];
//     right++;
//     i++;
    
    
//     }
  
  
//   }


// int main() {

// char s[] = "abcabcbb";

//   printf("%d",repeat(s));
  



//   return 0;
// }

/*correct code**************************************************************************************************/



int lengthOfLongestSubstring(char* s) {
     int last[256];
    for (int i = 0; i < 256; i++) last[i] = -1;

    int left = 0;
    int maxLen = 0;

    for (int right = 0; s[right] != '\0'; right++) {
        unsigned char c = (unsigned char)s[right];

        // if char was seen inside current window, move left
        if (last[c] >= left) {
            left = last[c] + 1;
        }

        last[c] = right;

        int len = right - left + 1;
        if (len > maxLen) maxLen = len;
    }

    return maxLen;

}



