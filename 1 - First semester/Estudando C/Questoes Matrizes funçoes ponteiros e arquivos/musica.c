#include <stdio.h>
#include <string.h>

typedef struct {
	char titulo[30];
	char artista[30];
	int duracaoM;
	int duracaoS;
	
} Musica;

typedef struct {
	char nome[30];
	Musica music;
} Playlist;

	void menu ()
	{
		printf("\n");
		puts("[1] Cadastrar Musica. ");
		puts("[2] Mostrar Musica. ");
		puts("[3] Criar playlist. ");
		puts("[4] Inserir musica em playlist.");
		puts("[5] Exibir Playlist. ");
	}
	
	void cadastrarMusica (Musica musica[], int *i) 
	{
		fflush(stdin);
		printf("Titulo: ");
		scanf("%[^\n]s",musica[*i].titulo);
		
		fflush(stdin);
		printf("Artista: ");
		scanf("%[^\n]s",musica[*i].artista);
		
		fflush(stdin);
		printf("Duracao no formato (MM:SS): ");
		scanf("%d:%d",&musica[*i].duracaoM,&musica[*i].duracaoS);
		(*i)++;
		
	}
	
	void mostrarMusicas (Musica musica[], int i) 
	{	
		int j;
		
		for (j = 0; j < i; j++) {
			printf("Titulo: %s (artista: %s, duracao: %d:%d.)\n",musica[j].titulo, musica[j].artista, musica[j].duracaoM, musica[j].duracaoS);
		}
		printf("\n");
	}
	
	void criarPlaylist (Playlist play[], int *n)
	{
		fflush (stdin);
		printf("Nome da Playlist: ");
		scanf("%[^\n]s",play[*n].nome);
		(*n)++;
	}
	
	void inserirMusica (Musica musica[], Playlist play[], int *k)
	{
		int codigo;
		
		printf("Digite codigo da musica: ");
		scanf("%d",&codigo);
		
		strcpy(play[*k].music.titulo, musica[codigo].titulo); 
		strcpy(play[*k].music.artista, musica[codigo].artista);
		play[*k].music.duracaoM = musica[codigo].duracaoM;
		play[*k].music.duracaoS = musica[codigo].duracaoS; 
		
	(*k)++;
	}
	
	void exibirPlay (Musica musica[], Playlist play[], int k) 
	{
		int j, b_codigoPlay;
		
		printf("Digite codigo da playlist: ");
		scanf("%d",&b_codigoPlay);
		
		for (j = 0; j < k; j++) {
			if (j == b_codigoPlay) {
				printf("Nome: %s \n", play[j].nome);
				printf("%d:%d - %s (%s) \n", play[j].music.duracaoM, play[j].music.duracaoS,
										     play[j].music.titulo, play[j].music.artista);
				break;
			}
		}
	}
int main ()
{
	Musica musica[10];
	int opcao, i = 0, n = 0, k = 0;
	Playlist play[10];
	
	while (1)
	{
		menu();
		printf("Entre com uma opcao: ");
		scanf("%d",&opcao);
		
		switch (opcao) {
			case 1:{
				cadastrarMusica (musica, &i);
				break;
			}
			case 2:{
				mostrarMusicas (musica, i);
				break;
			}
			case 3:{
				criarPlaylist (play, &n);
				break;
			}
			case 4:{
				inserirMusica (musica, play, &k);
				break;
			}
			case 5:{
				exibirPlay (musica, play, k);
				break;
			}
		}
	}
	return 0;
}
