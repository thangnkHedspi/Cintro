//week3 - bai5

#include <stdio.h>

int main (){
    
    int day, threeday, week;
    printf("so khach thue 1 ngay la: ");
    scanf("%d", &day);
    printf("so khach thue 3 ngay la: ");
    scanf("%d", &threeday);
    printf("so khach thue 1 tuan la: ");
    scanf("%d", &week);
    
    printf("tong tien thu duoc la: %d\n", 7*day + 15*threeday + 21*week);
    
}
