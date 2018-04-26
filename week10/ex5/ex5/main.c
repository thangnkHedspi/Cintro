//bai 5 tuan 10

#include <stdio.h>

void nhapMang(int a[], int n){
    printf("nhap mang: \n");
    for (int i = 0; i< n ; i++) {
        scanf("%d", &a[i]);
    }
}

int demSo0 (int a[], int n){
    int dem = 0;
    for (int i = 0 ; i< n ; i++) {
        if (a[i] == 0) {
            dem ++;
        }
    }
    return dem;
}

int doDaiDayCon0max(int a[], int n){
    int dem = 0, max = 0;
    for (int i = 0 ; i< n; i++) {
        if (a[i] == 0) {
            dem ++;
        }
        if (a[i] != 0) {
            if (dem > max) {
                max = dem;
            }
            dem = 0;
        }
    }
    if (dem > max ) {
        max = dem;
    }
    return max;
}

void bubbleSort(int a[], int n){
    for (int i = 0; i< n ; i++) {
        for (int j = n-1 ; j > i ; j--) {
            if (a[j] < a[j-1]) {
                int tg = a[j];
                a[j] = a[j-1];
                a[j-1] = tg;
            }
        }
    }
}

void demSoLanXuatHien(int a[], int n){
    int tmp = 0, m = 0;
    for (int i = 0; i< n ; i++) {
        if (a[i] == a[m]) {
            tmp++;
        }else{
            printf("so %d xuat hien %d lan\n", a[i-1], tmp);
            m = i;
            tmp = 1;
        }
    }
    printf("so %d xuat hien %d lan\n", a[m], tmp);
}


int main (){
    
    printf("nhap so luong phan tu mang: ");
    int n;
    scanf("%d", &n);
    
    int a[n];
    nhapMang(a, n);
    
    printf("so luong so 0 trong mang la: %d\n", demSo0(a, n));

    printf("so luong day 0 dai nhat la: %d\n", doDaiDayCon0max(a, n));

    bubbleSort(a, n);
    demSoLanXuatHien(a, n);
    
}
