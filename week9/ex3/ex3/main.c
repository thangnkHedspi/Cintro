//bai 3 - tuan 9

#include <stdio.h>

int lapPhuong(int n){
    return n*n*n;
}

void uoc(int n){
    for (int i = 1; i <= n; i++) {
        if (n%i == 0) {
            printf("%-5d", i);
        }
    }
}

int binhPhuong(int n){
    return n*n;
}

int main (){
    
    printf("nhap so nguyen duong n: ");
    int n;
    scanf("%d", &n);
    
    int tg =0;
    for (int i = 1; i <= n ; i++) {
        tg = tg + lapPhuong(i);
    }
    printf("tong lap phuong tu 1 den n la: %d\n\n", tg);
    
    printf("cac uoc so cua n la: \n");
    uoc(n);
    printf("\n\n");
    
    printf("cac binh phuong cua so tu 1 den n la: \n");
    for (int i = 1; i <= n; i++) {
        printf("%-5d", binhPhuong(i));
    }
    
}
