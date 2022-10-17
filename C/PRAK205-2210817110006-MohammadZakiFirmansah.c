#include<stdio.h>
#include<math.h>
int main (){
    float Tinggi, Miring;
    printf("Nila Tinggi  :");
    scanf("%f", &Tinggi);
    printf("Nilai Miring :");
    scanf("%f", &Miring);
    printf("Alas Segitiga   = %.0f cm\n", sqrt(Miring*Miring-Tinggi*Tinggi));
    printf("Tinggi Segitiga = %.0f cm\n", Tinggi);
    printf("Keliling segitiga =%.0f cm\n", Tinggi+Miring+(sqrt(Miring*Miring-Tinggi*Tinggi)));
    printf("Luas Segitiga     =%.0f cm^2", (sqrt(Miring*Miring-Tinggi*Tinggi)*Tinggi)/2);
}