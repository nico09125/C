#include <stdio.h>
#include <stdlib.h>
int main(){
int n,     
    unitats, 
    reves=0, 
    aux;  

   printf("Dona'm un número: ");
   scanf("%d",&n);
     
   aux=n;   
   while(aux!=0){
      unitats=aux%10;
      reves=reves*10+unitats;
      aux=aux/10;
   }
   
   if(n==reves) printf("El número %d és capicua\n",n);
   else printf("El número %d no és capicua\n",n);
   
   getchar();
}    
