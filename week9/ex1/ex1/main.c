//bai 1 - tuan 9

#include <stdio.h>

double dongNang(double m, double v){
    return m*v*v/2;
}



int main (){
    
    printf("nhap khoi luong va van toc: ");
    double m, v;
    scanf("%lf%lf", &m, &v);
    
    printf("ke = %g\n", dongNang(m, v));
    
}
