#include <stdio.h>
#include <math.h>
/*
	Faça um programa que leia um número inteiro positivo, cálcule o quadrado e a raiz quadrada deste número
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
