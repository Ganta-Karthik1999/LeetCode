#include<stdio.h>
#include<stdbool.h>
#include<stdint.h>

#define BIT(n)  (1u << (n))

#define SET_BIT(x,n)    ((x) |= BIT(n))  
#define CLEAR_BIT(x,n)  ((x) &= ~BIT(n))

#define TEST_BIT(x,n)   ((x) & BIT(n))

#define FIELD_MASK(widht,shift) (((1u<<widht)-1u)<<shift)


int FIELD_WRITE(int reg,int value,int mask,int shift);

int FIELD_WRITE(int reg,int value,int mask,int shift){
  
  reg &= ~mask;
  
  reg |= ((value <<shift)&mask);
  
  return reg;
  
  
  }


uint8_t swap_bits (uint8_t x){
  
  return (uint8_t)((x >> 4)| (x << 4));
  }

uint8_t reverse_bits(uint8_t n){
  
  uint8_t result = 0;
  for (uint8_t i = 0 ; i<8; i++){
    result = result << 1;
    result |= (n&1);
    n = n >> 1;
    }
    
    return result;
  
  
  }

 
bool powerof2(uint8_t y){
  
  return ((y != 0 ) && ((y & (y-1)) == 0) );
  
  
  }




int main() {
  int shift = 4;
  int mask = FIELD_MASK(3,shift);
  FIELD_WRITE(0xcf,0x5,mask,shift);
  
  uint8_t x = 0xfc;
  x=swap_bits(x);

  uint8_t n = 0x80;
  uint8_t result;
  result = reverse_bits(n);

  uint8_t y= 2;
  printf("%d",powerof2(y));

  return 0;
}