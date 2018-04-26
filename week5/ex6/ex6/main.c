#include <stdio.h>

int main (){
    
    printf("nhap so hoc sinh: ");
    int n;
    scanf("%d", &n);
    
    printf("so sinh vien trong nhom nho nhat: %d\n", n/7);
    
    if (n%7 == 0) {
        printf("so sinh vien trong nhom lon nhat: %d\n", n/7);
    } else {
        printf("so sinh vien trong nhom lon nhat: %d\n", n/7+1);
    }
    
    printf("so luong sinh vien trung binh moi nhom: %g\n", (float) n/7);
    
    printf("so nhom tren kich thuoc trung binh: %d\n", n%7);
    
    printf("so nhom <= kich thuoc trung binh: %d\n", 7-n%7);
    
}
