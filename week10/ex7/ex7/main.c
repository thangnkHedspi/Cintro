//bai 7 tuan 10

#include <stdio.h>

int main (){
    
    printf("nhap so phan tu cua mang: ");
    int n, tmp = 0;
    scanf("%d", &n);
    
    int a[n];
    printf("nhap mang: ");
    for (int i = 0 ; i< n; i++) {
        scanf("%d", &a[i]);
    }
    
    for (int i = 0 ; i < n/2; i++) {
        if (a[i] == a[n-i-1]) {
            tmp++;
        }
    }
    if (tmp == n/2) {
        printf("mang doi xung.\n");
    }else{
        printf("mang khong doi xung.\n");
    }
}
