#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
	//exercicio 1
	/*float a, b;
	printf("Digite dois numeros: ");
	scanf("%f %f", &a, &b);
	
	if (a > b)
		printf("o número maior é o %f\n", a);
	else
		printf("o maior número é o %f\n", b);
		*/
		
	//exercicio 2 
	
	/*float a, raiz;
	printf("digite um número: ");
	scanf("%f", &a);
	raiz = sqrt(a);
	if (a > 0)
		printf("a raiz quadrada do numero digitado é %.2f\n", raiz);
	else
	printf("o número digitado é inválido");
	*/
	//exercicio 3 ler numero, se  positivo ler a raiz, se nao elevar ao quadrado
	/*float a, qu, rz;
	printf("digite um numero");
	scanf("%f", &a);
	qu = pow(a,2);
	rz = sqrt(a);
	if (a > 0)
		printf("a raiz quadrada do numero é %.2f\n", rz);
	else
		printf("o quadrado do numero digitado é %f\n", qu);
	*/

	//exercicio 3 ler numero, se positivo tirar raiz, se negativo fazer o quadrado
	/*float a, qu, rz;
	printf("digite um número: ")	;
	scanf("%f", &a);
	qu = pow(a,2);
	rz = sqrt(a);
	
	if (a>0)
		printf("%.2f", rz);
	else 		
		printf("%.0f/n", qu);
	*/	
	//exercicio 4 	ler numero e se positivo calcular e mostrar o seu quadrado e sua raiz
	
	/*float a, rz, qu;
	printf("digite um numero");
	scanf("%f", &a);
	rz = pow(a,2);
	qu = sqrt(a);
	if (a > 0){
		printf(" a raiz quadrada do numero digitado é: %.2f\n", rz);
		printf("o quadrado do numero digitado é: %.3f\n", qu);}
	else 
		printf("fim do programa \n");
	*/
	//exercicio 5 ler numero e dizer se é par ou ímpar
	/*int num, res;
	printf("digite um número: ");
	scanf("%d", &num);
	//res = num % 2;
	if ((num % 2) == 0)
		printf("o número digitado é par! ");
		
	else	
		printf("o número digitado é ímpar!");
	*/
	//exercicios 6, ler 2 numeros, imprimir o maior e imprimir a diferença entre eles
	/*float a, b, c;
	printf("digite dois números: ");
	scanf("%f %f", &a, &b);
	c = a - b;
	if (a > b)
		printf("o maior valor é o %f", a);
	else
		printf("o maior valor digitado é %f\n\n", b);
		
	printf("a diferença entre os valores digitados é %.0f\n", c);
	*/
	//exercicio 7 ler 2 numeros, mostrar o maior, e caso iguais mostrar a msg "numeros iguais"

	/*float a, b;
	printf("digite 2 numeros");
	scanf("%f %f", &a, &b);
		
	if (a > b)
		printf("o maior numero é %f\n", a);
	
		if (a < b)
			printf("o maior numero é %f\n", b);
			
	else gcc
		printf("os numeros digitados são iguais!");
	*/
	//exercicio 8 ler 2 notas, veificar se sao validas e exibir a media das otas, valores entre 0.0 e 10.0, caso estiver fora desse intervalo deve finalizar o programa e avisar usuario7
	float a, b, media;
	printf("digite duas notas");
	scanf("%f %f", &a, &b);
	media = (a + b)/2;

	if (a > 10) //|| (a < 0){
		printf("as notas estão em formato válido!");
		if  (b > 10)// || (b < 0){
			printf("as notas estão em formato válido!");
			//}
		//}
	else //{
		printf("a média das notas inseridas é: %f", media);
		//}
		
	return 0;	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
