//tro choi doan so
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    
    int a, b;
    srand(time(NULL));
    a = rand()%10+1;
    scanf("%d", &b);
    
    if (b == a) {
        printf("so ban chon dung.\n");
    } else {
        if (b < a) {
            printf("so ban chon nho hon.\n");
            printf("so dung la: %d\n", a);
        } else {
            printf("so ban chon cao hon.\n");
            printf("so dung la: %d\n", a);
        }
    }
    
}
