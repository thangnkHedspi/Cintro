#include<stdio.h>

void nhapMang(int a[], int n){
    printf("nhap mang: ");
    for (int i = 0 ; i< n; i++) {
        scanf("%d", &a[i]);
    }
}

void mangCon(int a[], int n){
    for (int i = 0 ; i< n; i++) {
        printf("%d\n", a[i]);
        for (int j = i ; j < n-1; j++) {
            for (int k = i; k <= j+1; k++) {
                printf("%d \t", a[k]);
            }
            printf("\n");
        }
    }
}

int main(){
    
    int n;
    scanf("%d", &n);
    int a[n];
    
    nhapMang(a, n);
    
    mangCon(a, n);
    
}

    

