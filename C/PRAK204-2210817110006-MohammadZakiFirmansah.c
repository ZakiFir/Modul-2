#include<stdio.h>
#include<math.h>
int main(){
    float r,t;
    printf("jari-jari    :");
    scanf("%f", &r);
    printf("tinggi       :");
    scanf("%f", &t);
    printf("Volume Bejana   = %.2f \n",22*r*r*t/7);
    printf("Luas Bejana     = %.2f \n",2*22*r*(r+t)/7);
    printf("Keliling Bejana = %.2f", 2*22*r/7);
}