//bai 3 - tuan 11

#include <stdio.h>

int main(){
    
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int *ptr;
    
    ptr = &a;
    *ptr += 100;
    ptr = &b;
    *ptr += 100;
    ptr = &c;
    *ptr += 100;
    
    printf("%d  %d  %d\n", a, b, c);
    
}

