//bai 1 - tuan 6

#include <stdio.h>

int main (){
    
    char a, b, c;
    scanf("%c %c %c", &a, &b, &c);
    
    if (a<b && a<c) {
        printf("%c", a);
    } else {
        if (b<a && b<c) {
            printf("%c", b);
        } else {
            printf("%c", c);
        }
    }
    printf("\n");
    
}

