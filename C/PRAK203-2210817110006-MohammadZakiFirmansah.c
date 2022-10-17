#include<stdio.h>
int main(){
    float a, b, i, j, x, y;
    printf("Angka a   :");
    scanf("%f", &a);
    printf("Angka b   :");
    scanf("%f", &b);
    printf("Angka i   :");
    scanf("%f", &i);
    printf("Angka j   :");
    scanf("%f", &j);
    printf("Angka x   :");
    scanf("%f", &x);
    printf("Angka y   :");
    scanf("%f", &y);
    printf("Hasil %.3f", (a-b)*(i/j)-(x+y));
}