#include <stdio.h>

int main(){
	
	int idade,
		qtdM,
		idadeMenorSalario,
		maiorIdade,
		menorIdade,
		i;
		
	float salario,
		  salarioT,
		  menorSalario,
		  media;
		  
	char sexo,
		 sexoMenorSalario;
	
	salarioT = 0;
	qtdM = 0;
	i = 1;
	do{
		printf("Entre com a idade da pessoa %d: ",i);
		scanf("%d%*c",&idade);
		if(idade < 0) {
			i = i - 1;
			break;
		}
		printf("Entre com o sexo (M/F) da pessoa %d: ",i);
		scanf("%c%*c",&sexo);
		printf("Entre com o salario da pessoa %d: ",i);
		scanf("%f%*c",&salario);
		salarioT = salarioT + salario;
		if(i == 1){
			maiorIdade = idade;
			menorIdade = idade;
			
			menorSalario = salario;
			idadeMenorSalario = idade;
			sexoMenorSalario = sexo;
		}
		
		if(idade > maiorIdade) maiorIdade = idade;
		if(idade < menorIdade) menorIdade = idade;
		
		if(sexo == 'F' && salario <= 200) qtdM += 1;
		
		if(salario < menorSalario){
			idadeMenorSalario = idade;
			sexoMenorSalario = sexo;
		}
	i++;
	}while(!0);
	
	media = salarioT / i;
	printf("A media dos salario dos grupo e: %.2f.\n",media);
	printf("Maior e menor idade do grupo respectivamente: maior [%d anos], menor [%d anos].\n",maiorIdade,menorIdade);
	printf("A quantidade de mulheres com salario ate R$ 200,00: %d.\n",qtdM);
	printf("A idade e o sexo da pessoa que possui menor salario respectivamente: %d anos e do sexo %c.\n",idadeMenorSalario,sexoMenorSalario);
		
return 0;
}
