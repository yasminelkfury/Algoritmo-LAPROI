#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Loja {
	char NomeVinho[30];
	char NomeVinicula[30];
	char pais[20];
	int anodovinho;
	int codigodovinho;
	float precodovinho;
	struct Loja *proximo;
};

struct Loja *V;

void cadastrar_vinho(char NomeVinho[30], char NomeVinicula[30], char pais[20], int codigodovinho, int anodovinho, float precodovinho){
struct Loja *aux, *b;
	aux = malloc(sizeof(struct Loja));
	int i;


        aux->anodovinho = anodovinho;
        strcpy(aux->NomeVinho, NomeVinho);
        strcpy(aux->NomeVinicula, NomeVinicula);
        strcpy(aux->pais, pais);
        aux->codigodovinho = codigodovinho;
        aux->precodovinho = precodovinho;
        aux->proximo = 0;



        if(V == 0){
           V = aux;
	}
        else{
           b = V;
           	while(b->proximo != 0){
                 b = b->proximo;

                }
                b -> proximo = aux;
	}


}
void Imprimir_Lista(){
struct Loja *aux;

aux = V;

	while(aux != 0){
        printf("Nome do vinho: %s\n", aux->NomeVinho);
		printf("Vinicula: %s\n", aux->NomeVinicula);
		printf("Pais: %s\n\n\n", aux->pais);
		printf("Ano: %d\n", aux->anodovinho);
		printf("Codigo: %d\n", aux->codigodovinho);
		printf("Pre�o: %f\n", aux->precodovinho);

		aux = aux->proximo;
	}
}
void Remover_Vinho(int numero) {
struct Loja *aux, *b;
aux = V;
	while(aux != 0){
		while(aux->codigodovinho =! numero){
	   	  	aux->codigodovinho = aux->proximo->codigodovinho;
		}
	  free(V);
	  V = NULL;
	  printf("Item removido.");
	  V = 0;
	}
}
void Buscar_Vinho(int codigodovinho){
struct Loja *aux;
aux = V;
    while(aux != 0){
		if(aux ->codigodovinho != codigodovinho){
			aux = aux->proximo;
		}
		else{
			printf("Achei!")
		Imprimir_Lista(aux);
		}
    }
}
void Ordenar_Vinho(opcao){
struct Loja *aux, *B, *C;
aux = V;
int x,n,A;
float w,D;
char l,k,m;
	while(C->proximo != 0){
		C = C->proximo;
		B = B->aux;
		while(B->aux !=0){
			if(y == 'C' || y == 'c'){
				x = aux->codigodovinho;
				if(x < C->codigodovinho){
					A = B->codigodovinho;
					B->codigodovinho = C->codigodovinho;
					C->codigodovinho = A;
					A = B->anodovinho;
					B->anodovinho = C->anodovinho;
					C->anodovinho = A;
					A = B->NomeVinho;
					B->NomeVinho = C->NomeVinho;
					C->NomeVinho = A;
					A = B->NomeVinicula;
					B->NomeVinicula = C->NomeVinicula;
					C->NomeVinicula = A;
					A = B->pais;
					B->pais = C->pais;
					C->pais = A;
					A = B->precodovinho;
					B->precodovinho = C->precodovinho;
					C->precodovinho = A;
				}
				else{
                    printf("\nTerminei!");
                        Imprimir_Lista();
            }
				}
            else if(y == 'A' || y == 'a'){
                n = aux->anodovinho;
                if(n < C->anodovinho){

                    A = B->anodovinho;
					B->anodovinho = C->anodovinho;
					C->anodovinho = A;

                    A = B->codigodovinho;
					B->codigodovinho = C->codigodovinho;
					C->codigodovinho = A;

					A = B->NomeVinho;
					B->NomeVinho = C->NomeVinho;
					C->NomeVinho = A;

					A = B->NomeVinicula;
					B->NomeVinicula = C->NomeVinicula;
					C->NomeVinicula = A;

					A = B->pais;
					B->pais = C->pais;
					C->pais = A;

					A = B->precodovinho;
					B->precodovinho = C->precodovinho;
					C->precodovinho = A;
                }
                else{
                    printf("\nTerminei!");
                        Imprimir_Lista();
            }
        }
            else if(y == 'R' || y == 'r'){
                w = aux->precodovinho;
                if(w < C->precodovinho){

                    A = B->precodovinho;
                    B->precodovinho = C->precodovinho;
                    C->precodovinho = A;

                    A = B->anodovinho;
                    B->anodovinho = C->anodovinho;
                    C->anodovinho = A;

                    A = B->codigodovinho;
                    B->codigodovinho = C->codigodovinho;
                    C->codigodovinho = A;

                    A = B->NomeVinho;
                    B->NomeVinho = C->NomeVinho;
                    C->NomeVinho = A;

                    A = B->NomeVinicula;
                    B->NomeVinicula = C->NomeVinicula;
                    C->NomeVinicula = A;

                    A = B->pais;
                    B->pais = C->pais;
                    C->pais = A;
                }
                else{
                    printf("\nTerminei!");
                        Imprimir_Lista();
                }
            }
            else if(y == 'P' || y == 'p'){
                strcpy(l, aux->pais);
                if(strcmp(l, C->pais)){

                    A = B->pais;
                    B->pais = C->pais;
                    C->pais = A;

                    A = B->precodovinho;
                    B->precodovinho = C->precodovinho;
                    C->precodovinho = A;

                    A = B->anodovinho;
                    B->anodovinho = C->anodovinho;
                    C->anodovinho = A;

                    A = B->codigodovinho;
                    B->codigodovinho = C->codigodovinho;
                    C->codigodovinho = A;

                    A = B->NomeVinho;
                    B->NomeVinho = C->NomeVinho;
                    C->NomeVinho = A;

                    A = B->NomeVinicula;
                    B->NomeVinicula = C->NomeVinicula;
                    C->NomeVinicula = A;
                }
                else{
                    printf("\nTerminei!");
                        Imprimir_Lista();
                }
            }
            else if(y == 'N' || y == 'n'){
                strcpy(k, aux->NomeVinicula);
                strcpy(m, aux->NomeVinho);
                if(strcmp(k, C->NomeVinicula)){

                    A = B->NomeVinicula;
                    B->NomeVinicula = C->NomeVinicula;
                    C->NomeVinicula = A;

                    A = B->pais;
                    B->pais = C->pais;
                    C->pais = A;

                    A = B->precodovinho;
                    B->precodovinho = C->precodovinho;
                    C->precodovinho = A;

                    A = B->anodovinho;
                    B->anodovinho = C->anodovinho;
                    C->anodovinho = A;

                    A = B->codigodovinho;
                    B->codigodovinho = C->codigodovinho;
                    C->codigodovinho = A;

                    A = B->NomeVinho;
                    B->NomeVinho = C->NomeVinho;
                    C->NomeVinho = A;
                    if(strcmp(m, C->NomeVinho)){

                        A = B->NomeVinho;
                        B->NomeVinho = C->NomeVinho;
                        C->NomeVinho = A;

                        A = B->NomeVinicula;
                        B->NomeVinicula = C->NomeVinicula;
                        C->NomeVinicula = A;

                        A = B->pais;
                        B->pais = C->pais;
                        C->pais = A;

                        A = B->precodovinho;
                        B->precodovinho = C->precodovinho;
                        C->precodovinho = A;

                        A = B->anodovinho;
                        B->anodovinho = C->anodovinho;
                        C->anodovinho = A;

                        A = B->codigodovinho;
                        B->codigodovinho = C->codigodovinho;
                        C->codigodovinho = A;
                    }
                }
                else{
                    printf("Terminei!");
                        Imprimir_Lista();
                }
            }
		}
	}
}
int main(void) {
char x,y;
struct Loja *V;
int codigodovinho, anodovinho;
char NomeVinho[30], NomeVinicula[30], pais[20];
float precodovinho;
	V = 0;
	do{
		printf("\nEscolha uma op��o abaixo:\n");
		printf("C - Para cadastrar o vinho\n");
		printf("R - Para remover um vinho\n");
		printf("B - Para buscar um vinho\n");
		printf("O - Para ordenar a lista\n");
		printf("I - Para imprimir a lista\n");
		printf("S - Para sair do programa\n");
		scanf("%c", &x);

		if(x == 'S' || x == 's'){
			break;
		}
		if(x == 'C'||x == 'c'){
		printf("\nDigite o codigo: ");
			scanf("\n%d", &codigodovinho);
		printf("\nDigite o nome: ");
			scanf("\n%[^\n]s", NomeVinho);
		printf("\nDigite a vinicula: ");
			 scanf("\n%[^\n]s", NomeVinicula);
		printf("\nDigite o ano: ");
			scanf("\n%d", &anodovinho);
		printf("\nDigite o preço ");
			scanf("\n%f", &precodovinho);
		printf("\nDigite o pais: ");
			scanf("\n%s", pais);


		cadastrar_vinho(NomeVinho, NomeVinicula, pais, codigodovinho, anodovinho, precodovinho);

		}
		else if (x == 'I' || x == 'i') {
		Imprimir_Lista();
		}
		else if (x == 'R'||x == 'r') {
			printf("Digite o codigo do vinho para remover: ");
			scanf("%d", &codigodovinho);
		Remover_Vinho(codigodovinho);
		}
		else if ( x== 'B' || x == 'b'){
			printf("Digite o codigo do vinho: ");
			scanf("%d", &codigodovinho);
		Buscar_Vinho(codigodovinho);
}
		else if(x == 'O' || x == 'o'){
			printf("Escolha uma op��o abaixo:");
			printf("N - Para ordenar por Nome e Vinicula");
			printf("C - Para ordenar por codigo");
			printf("A - Para ordenar por ano");
			printf("P - Para ordenar por pais");
			printf("R - Para ordenar por pre�o");
			scanf("%c", &y);
				Ordenar_Vinho(y);
}
		scanf("%c", &x);
	}while(x != 'S' || x != 's');
return 0;
}
