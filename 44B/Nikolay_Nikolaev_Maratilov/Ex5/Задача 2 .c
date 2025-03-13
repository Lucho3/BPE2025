/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void calculate(int *a, int *b, int *sum, int *diff, int *prod, float *quot) {
    *sum = *a + *b;
    *diff = *a - *b;
    *prod = (*a) * (*b);
    
    if (*b != 0) {
        *quot = (float)(*a) / (*b);
    } else {
        *quot = 0; 
    }
}

int main() {
    int num1, num2;
    int sum, diff, prod;
    float quot;

    scanf("%d", &num1);
    scanf("%d", &num2);

    calculate(&num1, &num2, &sum, &diff, &prod, &quot);

    printf("\nRezultati:\n");
    printf("Suma: %d\n", sum);
    printf("Razlika: %d\n", diff);
    printf("Proizvedenie: %d\n", prod);
    
    if (num2 != 0) {
        printf("Delenie: %.2f\n", quot);
    } else {
        printf("Delenie: Ne moje da se izpulni (delenie na 0)\n");
    }

    return 0;
}