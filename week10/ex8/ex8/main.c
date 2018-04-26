//bai 8 tuan 10

#include <stdio.h>

void nhapMang(float a[], int n){
    printf("nhap mang: ");
    for (int i = 0 ; i< n ; i++) {
        scanf("%f", &a[i]);
    }
}

void daoNguocMang(float a[], int n){
    int tmp;
    for (int i = 0 ; i< n/2 ; i++) {
        tmp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = tmp;
    }
}

void xuatMang(float a[], int n){
    for (int i = 0 ; i < n ; i++) {
        printf("%-10g", a[i]);
    }
    
}

int main (){
    
    printf("nhap so luong phan tu mang: ");
    int n;
    scanf("%d", &n);
    
    float a[n];
    nhapMang(a, n);
    xuatMang(a, n);
    printf("\n");
    daoNguocMang(a, n);
    xuatMang(a, n);
    printf("\n");
    
}
