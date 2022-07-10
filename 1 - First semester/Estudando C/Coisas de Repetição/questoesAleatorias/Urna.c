#include <stdio.h>

int main(){
	// Urna Eleitoral
	 int candidato, opcao, confirmacao, bolsonaro, ciro, haddad, votar;
	 bolsonaro = 0;
	 ciro = 0;
	 haddad = 0;
	
	 confirmacao = 0;
	 votar = 0;
	 while(!votar){
		 while(!confirmacao){
		 	
		 	 puts("Urna Eletronica: ");
			 puts("17. Bolsonaro");
			 puts("13. Haddad");
			 puts("12. Ciro Gomes");
			 printf("Digite o numero do seu candidato >> ");
			 scanf("%d",&candidato);
			 
			 switch(candidato){
			 	case 17:
			 		puts("Voce escolheu o candidato Bolsonaro!");
			 		puts("1 - Confirmar | 0 - Corrigir voto");
			 		scanf("%d", &confirmacao);
			 		bolsonaro+=1;
			 	break;
			 	
			 	case 13:
			 		puts("Voce escolheu o candidato Haddad!");
			 		puts("1 - Confirmar | 0 - Corrigir voto");
			 		scanf("%d", &confirmacao);
			 		haddad+=1;
			 	break;
			 	
			 	case 12:
			 		puts("Voce escolheu o candidato Ciro Gomes!");
			 		puts("1 - Confirmar | 0 - Corrigir voto");
			 		scanf("%d", &confirmacao);
			 		ciro+=1;
			 	break;
			 }
			 
			 if(confirmacao == 0){
			 	 printf("Digite o numero do candidato desejado candidato >> ");
				 scanf("%d",&candidato);
			 }	 
		}
		puts("0. Continuar votacao.");
		puts("1. Encerrar votacao.");
		scanf("%d",&votar);
		if(votar == 0){
			confirmacao = 0;
		}
	}
	puts("1. Mostrar quantidade de votos");
	puts("2. Sair");
	scanf("%d",&opcao);
	switch(opcao){
		case 1:
			printf("17 - Bolsonaro - %d votos.\n", bolsonaro);
			printf("13 - Haddad - %d votos.\n", haddad);
			printf("12 - Ciro Gomes - %d votos.\n", ciro);
			if(bolsonaro > haddad && bolsonaro > ciro){
				puts("Novo presidente - Bolsonaro");
			}
			else if(haddad > bolsonaro && haddad > ciro){
				puts("Novo presidente - Haddad");
			}
			else{
				puts("Novo presidente - Ciro");
			}
		break;
		
		case 2:
			return 0;
		break;
	}
	 
	return 0;
}
