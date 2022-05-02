#include <stdio.h>

//описываем функцию pow3() как внешнюю
extern int pow3(int num);

//описываем функцию pow4() как внешнюю
extern int pow4(int num);

int main(){
    int resPow3, resPow4;
    resPow3 = pow3(3);
    resPow4 = pow4(3);
    printf("pow3(3) = %d\n", resPow3);
    printf("pow4(3) = %d\n", resPow4);

    return 0;
}