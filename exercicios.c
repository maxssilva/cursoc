#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)

{
	/*
	printf("1° ex. ler numero inteiro e imprimir\n\n");

	int a;
	
		printf("digite um número: ");
		scanf("%d", &a);
		printf("o numero digitado é %d\n\n\n\n\n", a);
		
		printf("---------------------------------\n");

	printf("2° ex. ler numero real e imprimir\n\n");
	
	float b;
		printf("digite um número real: ");
		scanf("%f", &b);
		printf("o número digitado foi: %f\n\n", b);
	
	
		printf("---------------------------------\n");
	*/
	
	/*exercicio 3 escrever usuario digita 3 numeros e recebe a soma
	float d, e , f, soma;
	printf("digite o primeiro número! ");
	scanf("%f", &d);
	printf("digite o segundo número! ");
	scanf("%f", &e);
	printf("digite o terceiro número! ");
	scanf("%f", &f);
	
	soma = f + d + e;
	
	printf(" a soma dos valores digitados é: %f\n", soma);
		*/
	
	//exercicio 4 ler numero real e imprimir o quadrado desse numero
	//para funcoes matematicas incluir no compilador o fim -lm para que o compilador gcc inclua  a biblioteca com funcoes matematicas
	/*
	float h = 0;
	float qu = 0;
	printf("digite e valor: ");
	scanf("%g", &h);
	qu = pow(h,2);
	
	printf("o quadrado do valor digitado é: %g \n", qu);
	*/
	
//exercicio 6	 CONVERSAO DE CELSIUS PARA FAHRENHEIT

	/*float cels, fahr;
	
	printf("digite a temperatura em Celsius");
	scanf("%f", &cels);
	
	fahr = cels * (9.0/5.0) + 32;
	//para limitar as casas decimais, logo depois da chamda da variável, deve-se limitar com ponto e numero ( %.2f )
	printf("a temperatura convertida para F é: %.2f", fahr);
	*/
	
//exercicio 7 conversao de fahrenheit para celsius

	/*float cel, fah;
	
	printf("digite a temperatura em Fahrenheit: ");
	scanf("%f", &fah);
	cel = 5 * (fah - 32)/9;
	
	printf("a temperatura em celsius é: %.2f", cel);
	*/
	
//exercicio 8 ler temperatura em kelvim e devolver em celsius

	 /*float kel, ce;

	printf("digite a temperatura em kelvim: ");
	scanf("%f", &kel);
	ce = kel -273.15;
	printf("a temperatura em celsius é:  %2.f", ce);
	*/
	
//exercicio 9	converter de celsius para kelvim

	/*float c_els, k_elv;
	printf("digite a temperatura em celsius: ");
	scanf("%f", &c_els);
	k_elv = c_els + 273,15;
	printf("a temperatura em kelvim é: %2.f\n", k_elv);
	*/
//ex10 converter vel. km / ms

		
	/*float km_h, ms;
	printf("digite a velocidade em km/h: ");
	scanf("%f", &km_h);
	ms = km_h/3.6;
	printf("a velocidade convertida é: %.2f", ms);
	*/
//exercicio 14 converter grau em radiano

	/*float gra, rad, pi;
	printf("digite o valor do ângulo em graus: ");
	scanf("%f", &gra);
	pi = 3.14;
	rad = gra * pi/180;
	printf("o grau apresentado em radiano é: %.2f\n", rad);*/
	
//exercicio 15 converter radiano para grau	
	
	/*float grau, radi, pii;
	printf("digite o angulo em radiano: ");
	scanf("%f", &radi);
	pii = 3.14;
	grau = radi * 180 / pii;
	printf("o angulo em graus é: %.2f", grau);
	*/
	
// exercicios16 converter polegada em centimetro
	
	/*float pol, cent;
	printf("digite o comprimento em polegada: ");
	scanf("%f", &pol);
	cent =  pol *2.54;
	printf("o comprimento em centimetros é: %.2f", cent);*/
	
//exercicio17 converter centimetro em polegada

	/*float po, ce;
	printf("digite o comprimento em centimetro: ");
	scanf("%f", &ce);
	po = ce / 2.54;
	printf("o comprimento em polegadas é: %.2f", po);
	*/
	
//exercicios 18 converter litro em m³
	/*float li, m3;
	printf("digite a quantidade de litros: ");
	scanf("%f", &li);
	m3 = li / 1000;
	printf("o valor convertido em m³ é: %.2f\n", m3);
	*/
	
	
//exercicios 19 converter m³ em Litros
	/*float lit, m_cub;
	printf("digite a quantidade de m³: ");
	scanf("%f", &m_cub);
	lit = m_cub * 1000;
	printf("a quantidade de litros é de: %.2f", lit);
	*/	
// exercicio 20 kg para lb

	/*float kg, lb;
	printf("digite o peso em kg: ");
	scanf("%f", &kg);
	lb = kg / 0.45;
	printf("o peso convertido em libras é: %.2f", lb);
	*/

//exercicio 21 converter lb para kg
	
	/*float lib, kig;
	printf("digite o peso em libra: ");
	scanf("%f", &lib);
	kig = lib * 0.45;
	printf("o peso em kg é: %.2f", kig);
	*/
	
//exercicio 22 converter jarda para metro

	/*float m, j;
	printf("digite o comprimento em jarda: ");
	scanf("%f", &j);
	m = j * 0.91;
	printf("o comprimento em metros é: %.2f", m);
	*/
	
//exercicios 23 converter metro em jarda

	/*float met, jar;
	printf("digite o comprimento em metros: ");
	scanf("%f", &met);
	jar = met / 0.91;
	printf(" o comprimento em jardas é : %.2f", jar);
	*/
	
//exercicio 24 converter m² em acre:
	/*float m2, ac;
	printf("digite a área em m²: ");
	scanf("%f", &m2);
	ac = m2 * 0.000247;
	printf("a área em acre é: %.4f", ac);
	*/ 
	
//exercicio 25, converter acre para metro²:

	/*float ac, m2;
	printf("digite a area em acre: ");
	scanf("%f", &ac);
	m2 = ac * 4048.58;
	printf("a area em m² é: %.2f", m2);
	*/
	
//exercicio 26 converter m² em hectare
	/*float m2, hc;
	printf("digite a area em m²: ");
	scanf("%f", &m2);
	hc = m2 * 0.0001;
	printf("a area em hectares é: %.3f", hc);
	 */
// exercicio 27 converter valor em hectare para m²

	/*float hc, m2;
	printf("digite a area em hectare: ");
	scanf("%f", &hc);
	m2 = hc * 10000;
	printf("a area em m² é: %.3f", m2);
	*/
// exercicio28 ler 3 valores e apresentar a soma dos quadrados dos valores digitados
	/*float a, b, c;
	float sq = 0;
	printf("digite o 1° valor: ");
	scanf("%f", &a);
	printf("digite o 2° valor: ");
	scanf("%f", &b);	
	printf("digite o 3° valor: ");
	scanf("%f", &c);	
	sq = pow(a,2) + pow(b,2) + pow(c,2);
	printf("a soma dos quadrados dos valores digitados é: %.0f", sq);
	*/
	
//exercicio 29: ler 4 notas e imprimir a media

	/*float a, b, c, d , med;
	
		do{
		printf("Insira a primeira nota, com valor entre 0 e 10. ");
		
		scanf("%f", &a);	 
		} while(a < 0 || a > 10);
	
		do
		{
		printf("Insira a segunda nota, com valor entre 0 10: ");
		scanf("%f", &b);	 
		} while(b < 0 || b > 10);
	
		do{
		printf("Insira a terceira nota, com valor entre 0 e 10: ");
		scanf("%f", &c);	 
		} while(c < 0 || c > 10);
	
		do{
		printf("Insira a quarta nota, com valor entre 0 e 10: ");
		scanf("%f", &d);
		} while(d < 0 || d > 10);
	
	med = (a + b + c + d) / 4;
	
	printf("a média das notas é %.2f", med);
	*/
//	ex.30 ler um valor em real e converter para dolar

	/*float r, d, c;
	printf("digite a cotação do dolar do dia: ");
	scanf("%f", &d);
	printf("digite o valor em reais disponível: ");
	scanf("%f", &r);
	
	c = r / d;
	
	printf("o valor convertido em dólares é: %.2f", c);
	*/
	
//exer. 31 ler um numero inteiro e imprimir antecessor e sucessor	 		
	/*float b, c;
	float a = 0;
	printf("digite um número: ");
	scanf("%f", &a);
	
	b =  (a + 1);
	c = (-1 + a);
	
	printf("o antecessor do número digitado é: %.1f", c);
	printf("o sucessor do número digitado é: %.1f", b);
	*/

//exer. 32 ler numero inteiro e imprimir soma do sucessor do seu triplo com o antecessor do seu dobro

	/*float a, b, c;
	printf("digite um número: ");
	scanf("%f", &a);
	b =  ((3 * a) + 1) + (-1 + (a * 2));
	printf("a soma do sucessor do triplo do número digitado com o antecessor do seu dobro é: %.2f", b);
	*/
//exer.33 ler tamanho do lado do quadrado e calcular area

	/*float a, b;
	printf("digite o tamanho do lado do quadrado: ");
	scanf("%f", &a);
	b = a * a;
	printf("a área do quadrado é: %f", b);
	 */
	 
//exercicio 34 ler valor do raio do circulo e calcular a area do circulo

	/*float r, area, pi;
	printf("digite o raio do circulo: ");
	scanf("%f", &r);
	pi = 3.141592;
	
	area = pi * r;
	printf("a area do circulo é: %.2f", area);
	*/	 

//exercicio 35 calcular hipotenusa
	/*float a, b, hip;
	printf("digite o valor do primeiro cateto: ");
	scanf("%f", &a);
	printf("digite o valor do segundo cateto: ");
	scanf("%f", &b);
	hip = sqrt( pow(a,2) + pow(b,2));
	
	printf("o valor da hipotenusa é: %.2f/n", hip);
	*/
	
//exercicio 36 calcular volume cilindro

	/*float h, r, area;
	float pi = 3.141592;
	printf("digite a altura do cilindro em metros ");
	scanf("%f", &h);
	printf("digite o raio do cilindro em metros: ");
	scanf("%f", &r);
	area = pi * pow(r,2) * h;
	printf("a area do cilindro é: %.2f", area);
	*/
	
//exercicio 37 desconto produto

	/*float custo, desconto;
	printf("digite o valor do produto: ");
	scanf("%f", &custo);
	desconto = 0.88 * custo;
	
	printf("o valor com desconto é: %2.f\n", desconto);
	*/
	
//exercicio 38 salario com aumento
	/*float sal, n_sal;
	printf("digite o valor do salário: ");
	scanf("%f", &sal);
	n_sal = sal * 1.25;
	printf("o novo salário é : %.2f", n_sal);
	*/
	
//exercicio 39	dividir premio para ganhadores

	/*float a, b, c;
	a = 780000 * 0.46;
	b = 780000 * 0.32;
	c = 780000 * (1 -(0.46 + 0.32));
	
	printf("o primeiro ganhador receberá:  %.2f\n", a);
	printf("o segundo ganhador receberá:  %.2f\n", b);
	printf("o terceiro ganhador receberá: %.2f\n", c);
	*/
	 
//exercicio 40 calculo salario sem imposto
	
	/*float rs, d, salario, liqu, desc;
	float ir = 0.08;
	printf("insira o valor por hora trabalhada: ");
	scanf("%f", &rs);
	printf("insira a quantidade de horas trabalhadas: ");
	scanf("%f", &d);
	salario = rs * d;
	liqu = salario - (ir * salario);
	desc = salario - liqu;
	printf("o valor recebido será de: %.2f\n", liqu);
	printf("o valor do desconto referente ao IR foi de: %2.f\n", desc);
	 */
	 
	
// exercicio 41 ler hora de trabalho, numero de hrs trabalhadas, valor a ser pago para funcionario com mais 10%

	/*float vr_hr, hrs, vr_pg;
	printf("digite o valor da hora de trabalho: ");
	scanf("%f", &vr_hr);
	printf("digite a quantidade de horas trabalhadas: ");
	scanf("%f", &hrs);
	vr_pg = 1.1 * (vr_hr * hrs);
	printf("o valor a ser recebido é: %.2f", vr_pg);
	*/

// exercicio 42 receber salario base, imprimir valor a receber com 5% de gratificação - 7% do salario base

	/*float sal, vr_rec;
	printf("Digite o valor do salario base: ");
	scanf("%f", &sal);
	vr_rec = (0.93 * sal) + (sal * 0.05);
	printf("o valor a ser recebido é: %.2f", vr_rec);
	*/

//exercicio 43 buscar preço total, mostrar valor com desconto a vista,  valor de cada parcela em 3x, comissao do vendedor a vista e a prazo
	/*float vr_c, vr_a, vr_p, c_vra, c_vrp;
	printf("digite o valor da compra: ");
	scanf("%f", &vr_c);
	vr_a = vr_c * 0.90; //valor da compra a vista
	vr_p = vr_c / 3; //valor de cada parcela na compra a prazo
	c_vra = vr_a * 0.05; // comissao vendedor venda a vista
	c_vrp = vr_c * 0.05; // comissao vendedor venda a prazo
	
	printf("o valor da compra a vista é: %.2f\n", vr_a);
	printf("o valor de cada parcela na venda parcelada é: %.2f\n", vr_p);
	printf("o valor da comissão na venda a vista é: %.2f\n", c_vra);
	printf("o valor da comissão na venda a prazo é: %.2f\n", c_vrp);
	*/

//exercicio 44 receber altura do degrau da escada e calcular qtos degraus usuario deve subir para determinada altura desejada

	/*float h_deg, h_sub, qtd_deg;
	
	printf("digite a altura do degrau: ");
	scanf("%f", &h_deg);
	printf("digite a altura desejada para subida: ");
	scanf("%f", &h_sub);
	qtd_deg = ceil(h_sub / h_deg);
	printf("a quantidade de degraus para subir a altura desejada é: %.0f\n", qtd_deg);
	
	*/

	
	
	
	
	
	
	
	
	
	
	
	
	
	

return 0;
	

}

















