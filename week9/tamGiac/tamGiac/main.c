//ve tam giac dung ham

#include <stdio.h>

void cot(int ch, int n){
    for (int i = 0; i<n ; i++) {
        printf("%-3c", ch);
    }
}

int main (){
    
    int n, ch;
    scanf("%d%d", &n, &ch);
    
    for (int i = 0; i < n ; i++) {
        cot(ch, i);
        printf("\n");
    }
    
}
