#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(0,"Portuguese");
	float a,b,c,delta,bask1, bask2, d0;
	
	printf("Valor a: ");
	scanf("%f", &a);
	
	printf("Valor b: ");
	scanf("%f", &b);
	
	printf("Valor c: ");
	scanf("%f", &c);
	
	delta = (b * b)- 4 * a * c;
	
	printf("\nValor de Delta: %1.f", delta);
	
	if( delta > 0){
		
		bask1 = ((-b + sqrt(delta)) / (2 * a));
		bask2 = ((-b - sqrt(delta)) / (2 * a));
		
		printf("\nX1 = %1.f\nX1 = %1.f", bask1,bask2);
	}
	
	else if(delta == 0){
		
		d0 = (-b + 0) / 2 * a;
		printf("\nResultado = %1.f");
	}
	
	else{
		printf("\nN�o tem resposta");
	}
 		
}
