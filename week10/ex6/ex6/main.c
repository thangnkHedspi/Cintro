//bai 6 tuan 10
//ma tran

#include <stdio.h>

void nhapMaTran(int a[][3]){
    printf("nhap ma tran: ");
    for (int i = 0; i< 3 ; i++) {
        for (int j = 0 ; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
}

void xuatMaTran(int a[][3]){
    for (int i = 0 ; i< 3 ; i++) {
        for (int j = 0 ; j < 3 ; j++) {
            printf("%-5d", a[i][j]);
        }
        printf("\n");
    }
}

void nhanMaTran(int a[][3], int b[][3], int c[][3]){
    for (int i = 0; i < 3 ; i++) {
        for (int j = 0 ; j < 3 ; j++) {
            int sum = 0;
            for (int k = 0 ; k < 3 ; k++) {
                sum += a[i][k]*b[k][j];
            }
            c[i][j] = sum;
        }
    }
    printf("ket qua cua phep nhan ma tran la: \n");
    xuatMaTran(c);
}

int main (){
    
    int a[3][3], b[3][3], c[3][3];
    nhapMaTran(a);
    xuatMaTran(a);
    nhapMaTran(b);
    xuatMaTran(b);
    nhanMaTran(a, b, c);
}
