#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#define tam 200

int main(){
	/*char str[20] = "linguagem C";
	int i, j, total = 0;
	int tam1 = strlen(str);
	
	for (i=0; i<tam1; i++){
		if (str[i] == 'a' || str[i] =='e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
		total++;
	}	
	printf("nro de vogais minusculas diditadas é: %d\n", total);
	*/
	
	char str[200];
	char vogais[11] = "aeiouAEIOU";
	printf("Digite uma frase: ");
	scanf("%[^\n]", str);
	int i, j, total = 0;
	int tam1 = strlen(str);
	int tam2 = strlen(vogais);
	
	for(i=0; i<tam1; i++){
		for(j=0; j<tam2; j++){
			if(str[i] == vogais[j]){
				total++;
				break;
			}
		}
	
	}
	printf("nro vogais = %d\n", total);

system("pause");
return 0;
}
