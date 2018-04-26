//bai 2 - tuan 10

#include <stdio.h>

int main (){
    
    int a[10];
    for (int i = 0; i<10; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    
    int sum = 0;
    
    for (int i = 1; i<9; i++) {
        if (a[i-1] < a[i] && a[i] > a[i+1]) {
            sum += a[i];
        }
    }
    printf("tong cac gia tri lon nhat cuc bo cua day la: %d\n", sum);
    
}
