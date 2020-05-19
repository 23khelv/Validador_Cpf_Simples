#include<stdio.h>
//Apos excutar o programa validador de CPF
//Pular linha ou dar espa�o ap�s cada digito, para que ele seja 'lido'.
int main()
{
	int cpf[11];
	int m1[9]={10,9,8,7,6,5,4,3,2};
	int m2[10]={11,10,9,8,7,6,5,4,3,2};
	int i;
	printf("Entre com os 11 digitos do CPF:");
	for(i=0;i<11;i++)
	{	scanf("%d", &cpf[i]);
	}
	//C�lculo do primeiro d�gito verificador
	int soma=0;
	for(i=0; i<9; i++)
	{	soma = soma + cpf[i]*m1[i];
	}
	//
	int resto = ((soma*10) % 11)%10;
  	
	if(resto == cpf[9]){
		printf("\nPrimeiro verificador valido.");
	}
	else{
		printf("\nErro no PRIMEIRO verificador.");
	}
	//Calculo do Segundo Digito Verificador
	soma=0;
	for(i=0; i<10; i++)
	{	soma = soma + cpf[i]*m2[i];
	}
	//
	resto = ((soma*10) % 11)%10;
  	
	if(resto == cpf[10]){
		printf("\nSegundo verificador valido.");
	}
	else{
		printf("\nErro no SEGUNDO verificador.");
	}
	return 0;
}

