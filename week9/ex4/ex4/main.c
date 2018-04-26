//bai4 - tuan 9

#include <stdio.h>

int luong(int n){
    if (n >= 40) {
        return 40*15 + (n-40)*1.5*15;
    }
    return 40*15;
}

int main (){
    
    int n;
    printf("nhap vao so gio lam viec cua cong nhan trong 1 tuan: ");
    scanf("%d", &n);
    
    printf("tien luong trong 1 tuan la: %g\n nghin dong", (float) luong(n));
    
}
