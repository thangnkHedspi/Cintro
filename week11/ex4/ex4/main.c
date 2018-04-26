//bai 4 - tuan 11

#include <stdio.h>

void swap(int *x, int *y, int *z){
    int tmp = *x;
    *x = *y;
    *y = *z;
    *z = tmp;
}

int main (){
    
    int x= 10, y = 7, z = 20;
    printf("%d  %d  %d\n", x, y, z);
    
    swap(&x, &y, &z);
    printf("%d  %d  %d", x, y, z);
    
}
