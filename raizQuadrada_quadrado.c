#include <stdio.h>
#include <math.h>
/*
	Fa�a um programa que leia um n�mero inteiro positivo, c�lcule o quadrado e a raiz quadrada deste n�mero
*/
int main(){
	int num, raizQuad, quadrado;
	printf("Digite um numero inteiro positivo: ");
	scanf("%d", &num);
	quadrado = num * num;
	raizQuad = sqrt(num);
	printf("\nO quadrado de: %d = %d\n", num, quadrado);
	printf("\nA raiz quadrada de: %d = %d",num, raizQuad);
	
	return 0;
}
