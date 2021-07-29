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
	struct Loja *anterior;
};

struct Loja *V;

void cadastrar_vinho(char NomeVinho[30], char NomeVinicula[30], char pais[20], int codigodovinho, int anodovinho, float precodovinho){
Loja *aux;
	aux = malloc(V);
	int i;
	i=0


        aux->anodovinho = anodovinho;
        strcpy(aux->NomeVinho, NomeVinho);
        strcpy(aux->NomeVinicula, NomeVinicula);
        strcpy(aux->pais, pais);
        aux->codigodovinho, codigodovinho;
        aux->precodovinho, precodovinho;

        if(V == 0)
           V = aux;
        else{
            while(*proximo == i){
                 V.proximo = aux;
                 i++
            }
        }

        //else{ LISTA NAO VAZIA, FALTA FAZER
        //}
}


int main(void) {
char x;
int a,b,c,d,e,f;
		V = 0;
	printf("Escolha uma opção abaixo:");
	printf("C - Para cadastrar o vinho");
	printf("R - Para remover um vinho");
	printf("B - Para buscar um vinho");
	printf("O - Para ordenar a lista");
	printf("I - Para imprimir a lista");
	printf("S - Para sair do programa");
		scanf("%c", &x);

	if(x == 'C'){
	printf("Digite o codigo: ");
		scanf("%d", &a);
	printf("Digite o nome: ");
		scanf("%s", &b);
	printf("Digite a vinicula: ");
		scanf("%s", &c);
	printf("Digite o ano: ");
		scanf("%d", &d);
	printf("Digite o preço: ");
		scanf("%f", &e);
	printf("Digite o pais: ");
		scanf("%s", &f);
			cadastrar_vinho(b, c, f, a, d, e);
	}
return 0;
}
