#include<stdio.h> 
int main() { 
int sum=0, i=10; 
   sum=sum+i++; 
   printf("sum=%d\n", sum);
   i=i+1; 
   ++i; 
   i--; 
   sum+=i; 
   printf("sum=%d i=%d", sum, i); 
   return 0; 
} 