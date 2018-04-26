//bai 2 tuan 12

#include <stdio.h>

double* max(double *a, int size){
    double *ptr;
    ptr = a;
    
    if (size == 0 ) {
        ptr = NULL;
    }else{
        for (int i = 0 ; i< size ; i++) {
            if (*ptr < *(a+i)) {
                ptr = a+i;
            }
        }
    }
    
    return ptr;
}

int main (){
    
    int n;
    scanf("%d", &n);

    double a[100] ;
    for (int i = 0 ; i < n ; i++) {
        scanf("%lf", &a[i]);
    }
    
    double *tmp ;
    tmp = max(a, n);
    
    printf("%g\n", *tmp);
    
}

