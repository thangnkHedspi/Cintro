//bai 5 tuan 12

#include <stdio.h>

void nhapMang(int *a, int n){
    printf("nhap mang: ");
    int *ptr = a;
    for (ptr = a ; ptr < a+ n; ptr++) {
        scanf("%d", ptr);
    }
}

void daoNguocMang(int *a, int n){
    printf("mang sau khi dao nguoc la: \n");
    int *ptr = a+n;
    for (ptr = a+ n -1; ptr >= a; ptr--) {
        printf("%d\t", *ptr);
    }
}

int main (){
    
    int n;
    scanf("%d", &n);
    int a[n];
    
    nhapMang(a, n);
    daoNguocMang(a, n);
    printf("\n ");
    
}
