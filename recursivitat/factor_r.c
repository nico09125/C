#include <stdio.h>

double factorial(int n);

void main(){
    int n;
    printf("Introduce un número y calcularé el factorial: ");
    scanf("%d", &n);
    printf("%f\n", factorial(n));
    return;
}

double factorial(int n){
    double fact;
    if(n == 0) fact = 1;
    else fact = n*factorial(n-1);
    return fact;
}
