/* Área do Círculo */

#include <stdio.h>

int main(){

    double raio, area;
    const double pi = 3.14159;

    scanf("%lf.2f", &raio);

    area = pi * raio * raio;
    printf("A=%.4lf\n",area);

    return 0;

}