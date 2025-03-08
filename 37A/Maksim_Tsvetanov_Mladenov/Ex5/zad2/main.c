#include <stdio.h>
#include <stdlib.h>

void kalkolator(int *X, int *Y, int *suma, int *razlika, int *umozenie, int *delenie) {
    *suma = *X + *Y;
    *razlika = *X - *Y;
    *umozenie = (*X) * (*Y);
    if (*X == 0 || *Y == 0)
        *delenie = 0;
    else
        *delenie = *X / *Y;
}
int main() {
    int x, y, suma, razlika, umozenie, delenie;
    int *X = &x, *Y = &y;

    scanf("%d %d", X, Y);
    kalkolator(X, Y, &suma, &razlika, &umozenie, &delenie);

    printf("\nSuma: %d\n", suma);
    printf("Razlika: %d\n", razlika);
    printf("Umnovenie: %d\n", umozenie);
    if (*B != 0)
        printf("Delenie: %d\n", delenie);
    else
        printf("Sho delish na 0\n");

    return 0;
}
