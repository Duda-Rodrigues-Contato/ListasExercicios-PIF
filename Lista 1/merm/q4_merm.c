/* Média 1 */

#include <stdio.h>

int main(){

    double A, B, media;

    scanf("%lf.1f", &A);
    scanf("%lf.1f", &B);

    media = ((A * 3.5) + (B * 7.5)) / 11;

    printf("MEDIA = %.5lf\n", media);

    return 0;

}