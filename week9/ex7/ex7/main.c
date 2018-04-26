//bai 7 - tuan 9

#include <stdio.h>

int getJutgeData(int a, int b, int c, int d, int e){
    if (a>=0 && a<=10 && b>=0 && b<=10 && c>=0 && c<=10 && d>=0 && d<=10 && e>=0 && e<=10) {
        return 1;
    }
    return 0;
}

void calcScore(int a, int b, int c, int d, int e){
    int tg = a, tg2 = a;
    if (tg > b ) {
        tg = b;
    }
    if (tg > c ) {
        tg = c;
    }
    if (tg > d) {
        tg = d;
    }
    if (tg >e) {
        tg = e;
    }
    if (tg2 <b) {
        tg2 = b;
    }
    if (tg2 <c) {
        tg2 = c;
    }
    if (tg2 < d) {
        tg2 = d;
    }
    if (tg2 < e ) {
        tg2 = e;
    }
    
    printf("diem trung binh la: %g", (float)(a+b+c+d+e-tg-tg2)/3);
    printf("\n");
}

int main (){
    
    int a, b, c, d, e;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    
    if (getJutgeData(a, b, c, d, e)) {
        printf("diem cho la phu hop.\n");
    }else{
        printf("diem cho la khong phu hop.\n");
        
    }
    
    calcScore(a, b, c, d, e);
    
}
