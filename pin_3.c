#include <stdio.h>
void main(){
int resposta;
int errades;
errades = 0;

do{
	printf("Pin?: ");
	scanf("%d", &resposta);
	if(errades<3) errades++;
}while((resposta!=1234)&&(errades<3));
if(resposta==1234)
	printf("Ok!\n");
else printf("Sistema bloquejat!\n");
return;
}
