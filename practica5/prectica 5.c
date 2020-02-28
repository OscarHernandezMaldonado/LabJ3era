#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=0;
	float num,suma,prom;
	while(num>=0){
		printf("ingresa un numero: ");
		scanf("%f",&num);
		if(num>=0){
			suma=suma+num;
			i++;
		} 
	} 
	prom=suma/i;
	printf("su promedio es : %.2f\n",prom);
	printf("\n%d\n",i);
	return 0;
}
