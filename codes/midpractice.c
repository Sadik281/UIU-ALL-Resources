#include<stdio.h> 
int main() { 
int a=14, b=4, R, Q; 
    Q=0; 
    R=a; 
    while((a-b)>=0){ 
        R=a-b; 
        ++Q; 
        a=R; 
    } 
 
       
 
    printf("Q=%d\n R=%d", Q, R);
} 