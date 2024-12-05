#include <stdio.h>
#include <stdlib.h>
int main(){
int n,     
    unidades, 
    reves=0, 
    aux;  

   printf("Dame un número: ");
   scanf("%d",&n);
     
   aux=n;   
   while(aux!=0){
      unidades=aux%10;
      reves=reves*10+unidades;
      aux=aux/10;
   }
   
   if(n==reves) printf("El número %d es capicua\n",n);
   else printf("El número %d no es capicua\n",n);
   
   getchar();
}    
