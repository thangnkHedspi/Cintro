//bai1 - tuan 8

#include <stdio.h>

int main (){
    
    char c;
    int dem = 0;
    printf("nhap c: ");
    
    while ((c = getchar()) != '.') {
        if (c == ' ') {
            dem ++;
            if (dem == 1) {
                putchar(c);
            }
        }else{
            dem = 0;
            putchar(c);
        }
    }
    printf("\n");
    
}
