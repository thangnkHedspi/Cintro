//bai 8 - tuan 9

#include <stdio.h>

int laNamNhuan(int n){
    if (n%400 == 0 || (n%4 == 0 && n%100 != 0)) {
        return 1;
    }
    return 0;
}

int main (){
    
    int n;
    scanf("%d", &n);
    
    if (laNamNhuan(n)) {
        printf("do la nam nhuan \n");
    }else{
        printf("do khong phai nam nhuan \n");
    }
    
}
