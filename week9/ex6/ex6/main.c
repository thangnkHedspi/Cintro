//bai 6 - tuan 9
#include <stdio.h>

void kiemTra(int n){
    int chan = 0, le = 0, tg, dem = 0;
    while (n) {
        tg = n%10;
        dem++;
        if (tg%2 == 0) {
            chan++;
        } else {
            le++;
        }
        n /= 10;
    }
    if (dem == chan) {
        printf("so thuan chan\n");
    } else {
        if (dem == le) {
            printf("so thuan le\n");
        } else {
            printf("ko thuan chan thuan le\n");
        }
    }
}

int main (){
    
    int n;
    scanf("%d", &n);
    
    kiemTra(n);

}
