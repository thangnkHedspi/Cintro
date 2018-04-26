//bai 5 - tuan 9

#include <stdio.h>

float doC(float doF){
    return  5.0/9.0*(doF-32);
}

int main (){
    
    printf("doC  doF  \n");
    for (int i = 0; i <= 20; i++) {
        printf("%-5d%-5g\n", i, doC(i) );
    }
    
}
