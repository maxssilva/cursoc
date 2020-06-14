#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, b;
	/*printf("digite dois numeros: \n");
	scanf("%d %d", &a, &b);*/
	for (a=0; a<5; a++){
		for(b=1; b<20; b++){
			if(a == b)
				printf("1 ");

			else
			printf("0 ");
			}
		printf("\n");
	}

	system("pause");

return 0;
}
