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
    int i;
    double fact = 1;
    for(i=1;i<=n;i++) fact = fact*i;
    return fact;
}
