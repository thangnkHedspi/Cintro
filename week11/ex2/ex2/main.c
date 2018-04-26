//bai2 tuan 11

#include <stdio.h>

int main (){
    
    int a[7] = {13, -355, 235, 47, 67, 943, 1222};
    int *ptr;
    
    for (int i = 0 ; i < 7 ; i++) {
        ptr = &a[i];
        printf("dia chi cua a[%d] la: %x \n", i+1, ptr);
    }
    
}
