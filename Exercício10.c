#include <stdio.h>
void maiorNumero(int num1, int num2) {
	if (num1 > num2) {
		printf("O maior número é: %d\n", num1);
	} else if (num2 > num1) {
		printf("O maior número é: %d\n", num2);
	} else {
		printf("Os números são iguais.\n");
	}
}
int main() {
	int numero1, numero2;
	printf("Digite o primeiro número: ");
	scanf("%d"
	      , &numero1);
	printf("Digite o segundo número: ");
	scanf("%d"
	      , &numero2);
	      maiorNumero(numero1, numero2);
	return 0;
} #include <stdio.h>
void maiorNumero(int num1, int num2) {
	if (num1 > num2) {
		printf("O maior número é: %d\n", num1);
	} else if (num2 > num1) {
		printf("O maior número é: %d\n", num2);
	} else {
		printf("Os números são iguais.\n");
	}
}
int main() {
	int numero1, numero2;
	printf("Digite o primeiro número: ");
	scanf("%d", &numero1);
	printf("Digite o segundo número: ");
	scanf("%d", &numero2);
	      maiorNumero(numero1, numero2);
	return 0;
}