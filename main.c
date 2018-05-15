//
// Exemplo de utilização de switch
//

#include <stdio.h>
#include "add.h"
#include "sub.h"
#include "mlt.h"
#include "div.h"

int main(){
	int op, op1, op2;
	printf("Escolha uma operação!!\n");
	printf("0 - adição\n");
	printf("1 - subtração\n");
	printf("2 - multiplicação\n");
	printf("3 - divisão\n");

	fflush(stdin);
	scanf("%d", &op);

	printf("Entre dois operandos separados por um espaco!!\n");
	fflush(stdin);
	scanf("%d %d", &op1, &op2);


	switch(op){
		case 0:
			printf("O resultado e: %d\n", add(op1,op2) ); //do addition
			break;

		case 1:
			printf("O resultado e: %d\n", sub(op1,op2) ); //do subtraction
			break;

		case 2:
			printf("O resultado e: %d\n", mlt(op1,op2) ); //do multiplication
			break;

		case 3:
			printf("O resultado e: %d\n", div(op1,op2) ); //do division
			break;

		default: printf("Argumento invalido\n");
	}

	return 0;

}
