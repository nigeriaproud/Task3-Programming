#include <stdio.h>
int main(void){
    double a, b, c ;
    printf("三つの実数を入力してください\n");
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    printf("%lf",(a + b + c) / 3.0);
    return 0;
}
