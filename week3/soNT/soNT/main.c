#include <stdio.h>

int main (){
    
    int n, nt = 2, dem = 0;     //n la so luong so nguyen to , nt la so dang xet, dem la bien dem
    scanf("%d", &n);
    
    while (1) {
        int tg =1;
        for (int i = 2; i < nt; i++) {
            if (nt%i == 0) {
                tg = 0;
                break;
            }
        }
        if (tg == 1) {
            printf("%-5d", nt);
            dem++;
        }
        if (dem == n ) {
            break;
        }
        nt++;
    }
    printf("\n");
    
}
