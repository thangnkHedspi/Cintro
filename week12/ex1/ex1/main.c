//bai 1 tuan 12

#include <stdio.h>

void nhapMang(int *a, int n){
    for (int i = 0 ; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

int countEven(int *a, int n){
    int dem = 0;
    int *ptr = a;
    for (int i = 0 ; i< n ; i++, ptr++) {
        if (*ptr % 2 == 0 ) {
            dem ++;
        }
    }
    return dem;
}
int main (){

    int n;
    scanf("%d", &n);
    
    int *a;
    
    nhapMang(a, n);
    printf("so luong phan tu chan trong mang la: %d\n", countEven(a, n));

}
