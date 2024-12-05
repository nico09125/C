#include <stdio.h>
#include <math.h>

void main(){
float a, b, c, discriminant;
printf("Coeficient de la X²: ");
scanf("%f", &a);
printf("Coeficient de la X: ");
scanf("%f", &b);
printf("Terme independent: ");
scanf("%f", &c);

if(a == 0) printf("Si a es 0 no es una ecuación de segundo grado!\n");
else{
        discriminant = (b*b)-(4*a*c);
        if(discriminant < 0) printf("La ecuación de segundo grado no tiene soluciones!\n");
        if(discriminant == 0) printf("La ecuación de segundo grado tiene solución única y es: %f\n", (-1*b)/(2*a));
        if(discriminant > 0) printf("La ecuación de segundo grado no tiene dos soluciones: %f, %f\n", 
        ((-1*b)+sqrt(discriminant))/(2*a), ((-1*b)-sqrt(discriminant))/(2*a));
    }
return;
}
