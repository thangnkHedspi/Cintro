//bai 3 tuan 10

#include <stdio.h>

int chanLe(int a[2]){
    for (int i = 0; i<2; i++) {
        scanf("%d", &a[i]);
    }
    
    for (int i = 0; i<2 ; i++) {
        if (a[i] = a[i+1]) {
            return 1;
        }
    }
    return 0;
}

void mang1(int a1[], int n ){
    printf("nhap mang 1: ");
    for (int i = 0; i<n; i++) {
        scanf("%d", &a1[i]);
    }
}

void mang2(int a2[],int n){
    printf("nhap mang 2: ");
    for (int i = 0; i< n; i++) {
        scanf("%d", &a2[i]);
    }
}

int main (){
    
//    int a[2];
//    chanLe(a);
    
    int n, dem = 0;
    
    printf("nhap so luong mang: ");
    scanf("%d", &n);
    
    int a1[n], a2[n];
    
    mang1(a1, n);
    
    mang2(a2, n);
    
    for (int i = 0; i< n ; i++) {
        if (a1[i] == a2[i]) {
            dem ++;
        }
    }
    if (dem == n) {
        printf("hai mang bang nhau\n");
    }else{
        printf("hai mang ko bang nhau\n");
    }
}
