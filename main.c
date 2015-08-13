#include <stdio.h>
#include "calculadora.h"

int main(void){
char op;
int a,b,r;
printf("Que operacion desea realizar?\n<a>-Suma\n<b>-Resta\n<c>-Multiplicacion\n<d>-Division\n");
scanf("%c",&op);
printf("Ingrese el primer valor");
scanf("%d",&a);
printf("Ingrese el segundo valor");
scanf("%d",&b);
switch(op){
	case 'a':
	r=suma(a,b);
	break;
	case 'b':
	r=resta(a,b);
	break;
	case 'c':
	r=multiplicacion(a,b);
	break;
	case 'd':
	r=division(a,b);
	break;
}
printf("\nEl resultado es: %d",r);
return 0;
}
