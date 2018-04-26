//bai 1 - tuan 11

#include <stdio.h>

int main (){
    
    int a = 1, b= 2 , c = 3;
    int *prt;
    
    prt = &a;
    printf("%x\n", (unsigned int)prt);
    prt = &b;
    printf("%x\n", (unsigned int)prt);
    prt = &c;
    printf("%x\n", (unsigned int)prt);
    
}
