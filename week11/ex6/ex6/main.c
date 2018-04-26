//bai 6 - tuan 11
#include <stdio.h>

int incomeplus(int *ptr, int a, int b){
    printf("nhap muc luong hien tai: ");
    scanf("%d", &a);
    printf("nhap so nam da lam: ");
    scanf("%d", &b);
    if (b>3) {
        ptr = &a;
        *ptr+= 300000;
    }else{
        ptr = &a;
    }
    return *ptr;
}

int main (){
    
    int a = 0, b = 0, *ptr = NULL;
    printf("so luong sau la: %d\n", incomeplus(ptr, a, b));
    
}
