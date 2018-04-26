//bai 4 tuan 10

#include <stdio.h>

void nhapMang(int a[], int n){
    for (int i = 0; i< n ; i++) {
        scanf("%d", &a[i]);
    }
}

void tangDan(int a[], int n){
    for (int i = 0; i<n; i++) {
        for (int j = i+1;  j< n ; j++) {
            if (a[j] < a[i] && a[i]%2 == 1 && a[j]%2 == 1) {
                int tg = a[j];
                a[j] = a[i];
                a[i] = tg;
            }
        }
    }
}


void giamDan(int a[], int n){
    for (int i = 0 ; i < n-1; i++) {
        for (int j = n-1 ; j > i ; j--) {
            if (a[j] > a[j-1]) {
                int tg = a[j];
                a[j] = a[j-1];
                a[j-1] = tg;
            }
        }
    }
}

void xuatMang(int a[], int n ){
    for (int i = 0; i< n ; i++) {
        printf("%-5d", a[i]);
    }
}

int main (){
    
    int n;
    printf("nhap so luong mang: ");
    scanf("%d", &n);
    int a[n];
    
    nhapMang(a, n);
    printf("mang sap xep tang dan so le: \n");
    tangDan(a, n);
    xuatMang(a, n);
    
    printf("\n mang sap xep giam dan: \n");
    giamDan(a, n);
    xuatMang(a, n);
    printf("\n");
    
}
