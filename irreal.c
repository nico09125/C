#include <stdio.h>

int irreal(int n);

void main(){
    int n;
    printf("Introduix el número: ");
    scanf("%d", &n);
    if(irreal(n)) printf("\nIrreal\n");
    else printf("\nNo irreal\n");
    return;
}

int irreal(int n){
    int aux, unitats, decenes;
    unitats = n%10;
    decenes = (n/10)%10;
    if(n/10 == 0) aux=1;
       else if(unitats >= decenes) aux = irreal(n/10);
            else aux = 0;
    return aux;
}
