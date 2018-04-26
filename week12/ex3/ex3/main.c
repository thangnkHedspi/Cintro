#include <stdio.h>

void getSale(int *a, int n){
    int *ptr = a;
    for (ptr = a; ptr < a + n; ptr++) {
        scanf("%d", ptr);
    }
}

int totalSale(int *a, int n){
    int sum = 0;
    int *ptr;
    for (ptr = a; ptr < a + n; ptr++) {
        sum += *ptr;
    }
    return sum;
}

int main(){
    
    int a[100];
    int n;
    scanf("%d", &n);
    getSale(a, n);
    printf("tong = %d\n", totalSale(a, n));
    
}
