//bai 2 - tuan 9

#include <stdio.h>

int NT(int n){
    int tg = 1;
    for (int i = 2; i < n ; i++) {
        if (n % i == 0) {
            tg = 0;
            break;
        }
    }
    if (tg == 1) {
        return 1;
    }
    return 0;
}

int main (){
    
    printf("nhap so nguyen duong N: ");
    int n;
    scanf("%d", &n);
    
    for (int i = 2 ; i < n; i++) {
        if (NT(i)) {
            printf("%-5d", i);
        }
    }
    printf("\n");
    
}
