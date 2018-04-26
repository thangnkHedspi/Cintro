//bai 1 - tuan 10

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    int arr[100];
    srand(time(NULL));
    
    for (int i = 0 ; i < 100 ; i++) {
        arr[i] = 1+ rand()%100;
    }
    for (int i = 0 ; i<100; i++) {
        printf("%-5d", arr[i]);
    }
    
    int min = arr[0];
    int sumLe = 0;
    
    for (int i = 0; i< 100; i++) {
        if (arr[i] < min){
            min = arr[i];
        }
        if (arr[i]%2 == 1) {
            sumLe+= arr[i];
        }
    }
    printf("min la: %d\n", min);
    printf("tong so le la: %d\n", sumLe);
    
}
